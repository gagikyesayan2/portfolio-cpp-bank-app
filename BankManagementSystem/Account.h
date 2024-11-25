#ifndef Account_H  // Check if MY_CLASS_H is not defined
#define Account_H  // Define MY_CLASS_H

class Account {
private:
	double balance;
	int account_id;

public:
	  Account(int account_id, double balance);
    
	  void checkBalance();
	  void deposit(double amount);
	  void withdraw(double amount);

};

#endif