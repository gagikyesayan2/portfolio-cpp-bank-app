#include <iostream>
using namespace std;
#include "Bank.h"


void Bank::addCustomer(Customer& customer) {
	customers.push_back(customer);
}