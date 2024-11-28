#ifndef Account_H  
#define Account_H  
#include <string>
#include <iostream>
using namespace std;

class Account {
private:
	 double balance;
	 string customer_id;

public:
	   Account(string &customer_id, double balance);
	   string getId() const { return customer_id; }
	

	  void checkBalance();
	  static void deposit(double amount,string customer_id);
	 //inline void withdraw(double amount);

};

#endif