//This program demonstrates using the getline function
//to read character data into a string object
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string city;
	
	cout << "Please enter your name: ";
	getline(cin,name);
	cout << "Please enter your city of residence: ";
	getline(cin,city);
	
	cout << "You are " << name << " from " << city << "." << endl;

	return 0;
}
