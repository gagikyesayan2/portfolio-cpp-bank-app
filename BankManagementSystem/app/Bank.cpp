#include <iostream>
using namespace std;
#include "../header/Bank.h"


void Bank::addCustomer(Customer& customer) {
	customers.push_back(customer);
}