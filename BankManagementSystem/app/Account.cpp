
#include "../header/Account.h"
#include <iostream>
#include <string>
#include "../header/Customer.h"
using namespace std;

Account::Account(string& customer_id, double balance):
	customer_id(customer_id), balance(balance){}



void Account::deposit(double new_amount, string customer_id) {
	
	vector<Account> accounts = Customer::getAccounts();
	
	for (Account& acc : accounts) {
		if (acc.getId() == customer_id) {
			acc.balance += new_amount;
			system("cls");
			cout << "You have successfully completed the deposit process!"<<endl;
			cout << "Your current balance: " << acc.balance;
			return;
		}
	}
	cout << "incorrect id!" << endl;
	

}

void Account::checkBalance() {
	return;
}