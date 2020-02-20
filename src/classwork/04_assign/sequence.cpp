//write include statements 
#include"sequence.h"
using std::cout; 


/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/
void display_vector(const vector<string>& names)
{
	for (int i = 0; names.size(); ++i)
	{
		cout << names[i] << "\n";
	}
}


/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
