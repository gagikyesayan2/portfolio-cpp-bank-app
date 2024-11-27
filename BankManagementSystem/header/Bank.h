#ifndef Bank_H
#define Bank_H




#include <iostream>
#include <vector>
#include "Customer.h"
using namespace std;


class Bank {
private:
	vector<Customer> customers;
public:
	void addCustomer(Customer& customer);
};

#endif