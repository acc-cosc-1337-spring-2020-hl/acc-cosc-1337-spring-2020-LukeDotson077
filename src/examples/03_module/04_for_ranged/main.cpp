#include<string>
#include<iostream>
#include "for_ranged.h"

using std::cout;

int main() 
{
	string str = "John";
	loop_string_w_index(str);
	loop_string_w_auto(str);
	return 0;
}