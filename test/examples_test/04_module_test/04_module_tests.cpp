#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount get_balance")
{
	BankAccount account(150);

	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test BankAccount deposit")
{
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 150);

	account.deposit(50);
	REQUIRE(account.get_balance() == 200);
}

TEST_CASE("Test BankAccount withdrawl")
{
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

	account.withdrawl(-5);
	REQUIRE(account.get_balance() == 150);

	account.withdrawl(50);
	REQUIRE(account.get_balance() == 100);

	account.withdrawl(101);
	REQUIRE(account.get_balance() == 100);
}
