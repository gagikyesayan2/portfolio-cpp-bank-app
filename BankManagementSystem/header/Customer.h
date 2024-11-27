#ifndef Customer_H  // Check if MY_CLASS_H is not defined
#define Customer_H  // Define MY_CLASS_H


#include <string>
#include <vector>
#include "Account.h"
using namespace std;

class Customer {
private:
    string name;
    int customer_id;
    vector<Account> customer_accounts;
public:
    Customer(string& name, int customer_id);

    void addAccount(Account &account);
    vector<Account> getAccounts() const;
    int getId() const;
    string getName() const;
};
#endif