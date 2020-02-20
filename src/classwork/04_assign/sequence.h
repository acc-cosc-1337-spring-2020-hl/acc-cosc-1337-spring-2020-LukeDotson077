//write include statements for string and vector
#include<iostream>
#include<string>
#include<vector>
using std::vector; using std::string;



/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/
void display_vector(const vector<string>& names);

/*
Write prototype for void function update_vector_element that accepts parameters reference vector of strings,
a string search_value, and a string replace_value.
*/
void update_vector_element(vector<string>& search_value);

