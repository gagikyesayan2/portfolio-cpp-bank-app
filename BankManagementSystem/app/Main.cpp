#include <iostream>
#include <string>
#include <regex>
#include "../header/Account.h"
#include "../header/Customer.h"
#include <fstream>

using namespace std;

void createAccount(int);
void depositMoney(int);
void displayUI();

int main() {
    //Bank bank; // Assuming Bank class manages accounts
    int choice;
    
    
    do {
        displayUI();
        cin >> choice;
        switch (choice) {
        case 1: {
            createAccount(choice);
            break;
        }
        case 2:
            depositMoney(choice);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            cout << "Exiting, Thank you!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


void displayUI() {
    cout << "Welcome to the Bank Management System\n";
    cout << "1. Create a New Account\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. View Account Details\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

void createAccount(int choice) {
    system("cls");
    cout << "Create a New Account\n";

    string id;
    string name;
    
 
    cout << "Enter your name:";
    cin >> name;
    cout << "Create a 4-digit ID:";
    do
    {
        cin >> id;
        if (!std::regex_match(id, regex("^\\d{4}$"))) {
            cout << "Invalid input. Please enter a 4-digit ID." << endl;
        }
    } while (!std::regex_match(id, regex("^\\d{4}$")));
    system("cls");

    Customer customer(name, id);
    Account newAccount(id, 0);
    Customer::addAccount(newAccount);
    

    
    cout << "Your Account is successfully created!" << endl;
    cout << "account name: " + name +
        "\naccount id: " + id << endl << endl;


    cout << "press 0 to return menu\n";
    cin >> choice;
    system("cls");

}

void depositMoney(int choice) {
    string id;
    double amount;

    system("cls");
   
    do
    {
        cout << "Please insert your id: ";
        cin >> id;
    } while (!std::regex_match(id, regex("^\\d{4}$")));

    do
    {
        cout << "Please insert the amount: ";
        cin >> amount;
    } while (amount <= 0);

    
    Account::deposit(amount, id);
    cin >> choice;
    cout << "press 0 to return menu\n";
    cout << "press 5 to complete the transaction\n";
}