#include<string>
#include<iostream>
#include "for_ranged.h"

using std::cout;

int main() 
{
	string str = "John";
	loop_string_w_index(str);
	cout << "\n";
	loop_string_w_auto(str);
	return 0;
}