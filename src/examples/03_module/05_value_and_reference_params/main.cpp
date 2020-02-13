#include<iostream>
using std::cout;

int main() 
{
	int num = 5;
	cout << "Adress for num is: " << &num;

	int &num_ref = num;
	num_ref = 10;

	cout << "\nNum is: " << num;



	return 0;
}