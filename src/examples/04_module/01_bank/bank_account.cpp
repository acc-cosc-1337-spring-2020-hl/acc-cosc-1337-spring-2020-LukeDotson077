//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		//usually write to a file
		throw InvalidAmount("\nAmount must be greater than 0.\n");

	}
}

void BankAccount::withdrawl(int amount)
{
	if (amount <= 0 )
	{
		throw InvalidAmount("\nAmount must be greater than 0.\n");
	}
	else if(balance - amount < 0)
	{
		throw InvalidAmount("\nInsufficient funds\n");
	}
	else 
	{
		balance -= amount;
	}
}

