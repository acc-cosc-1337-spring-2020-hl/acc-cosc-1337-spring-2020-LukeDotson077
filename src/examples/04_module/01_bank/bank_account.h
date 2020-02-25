//bank_account.h
class BankAccount
{
public:
	BankAccount(int b) : balance{ b } {};
	int get_balance()const { return balance; }
	void deposit(int amount);
	void withdrawl(int amount);
private:
	int balance;
};
//The balance variable in the class scope is NOT the same variable as the balance variable in main.