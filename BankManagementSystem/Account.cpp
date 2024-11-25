
#include "Account.h"
using namespace std;
#include <iostream>

Account::Account(int account_id, double balance) {
	account_id = account_id;
	balance = balance;
}

void Account::deposit(double new_amount) {
	if (new_amount <= 0) {
		cout << "process is terminated, please insert valid amount!";
		return;
	}
	balance += new_amount;

}

void Account::checkBalance() {

}