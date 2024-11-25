#include <iostream>
using namespace std;
#include "Customer.h"

Customer::Customer(string& name, int customer_id)
	:name(name), customer_id(customer_id){}

void Customer::addAccount(Account& account) {
	customer_accounts.push_back(account);
}

vector<Account> Customer::getAccounts() const {
	return customer_accounts;
}

int Customer::getId() const{
	return customer_id;
}

string Customer::getName() const {
	return name;
}