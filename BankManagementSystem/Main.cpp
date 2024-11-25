#include <iostream>
#include <string>
#include <regex>
using namespace std;


void displayUI();

int main() {
    //Bank bank; // Assuming Bank class manages accounts
    int choice;
    do {
        displayUI();
        cin >> choice;

        switch (choice) {
        case 1: {

            break;
        }
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            cout << "Exiting... Thank you!\n";
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