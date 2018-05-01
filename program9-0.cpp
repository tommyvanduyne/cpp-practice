//this file is for testing returning a string declared in 
//a function versus returning a pointer to it
#include <iostream>
#include <string>
using namespace std;

//declare functions
string *return_string();

int main() {
	string *returnString;
	returnString = return_string();
	cout << returnString[0];
	return 0;
}

string *return_string() {
	string *heyThere = new string[3];
	heyThere[0] = "hello"; 
	heyThere[1] = "hi";
	heyThere[2] = "my MAN";
	return heyThere;
}
