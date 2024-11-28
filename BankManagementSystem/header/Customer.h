#ifndef Customer_H  // Check if MY_CLASS_H is not defined
#define Customer_H  // Define MY_CLASS_H

#include <fstream>
#include <string>
#include <vector>
#include "Account.h"




using namespace std;

 class Customer {
private:
    string name;
    string customer_id;
    static vector<Account> customer_accounts;
public:
     Customer(string& name, string &customer_id);

    static void addAccount(Account &acc);
    static vector<Account> getAccounts();
 
};
#endif