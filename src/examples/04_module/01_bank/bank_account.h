//bank_account.h
#include<string>

class BankAccount
{
public:
	BankAccount(int b) : balance{ b } {};
	int get_balance() { return balance; }
	void deposit(int amount);
	void withdrawl(int amount);
private:
	int balance;
};
//The balance variable in the class scope is NOT the same variable as the balance variable in main.

class InvalidAmount
{
public:
	InvalidAmount(std::string msg) : message{ msg } {};
	std::string get_message()const { return message; }
private:
	std::string message;
};