#include <iostream>
using namespace std;
#include "../header/Customer.h"
#include <string>



Customer::Customer(string& name, string &customer_id)
	:name(name), customer_id(customer_id){
	
}
vector<Account> Customer::customer_accounts;

 void Customer::addAccount(Account &acc) {
	customer_accounts.push_back(acc);
}

vector<Account> Customer::getAccounts()  {
	return customer_accounts;
}

//int Customer::getId() {
//	int a = 12;
//	return a;
//}

//string Customer::getName()  {
//	return name;
//}