// The purpose of this program is to write a script that converts a 
// double to a formatted dollar amt. e.g. 5432.1 => $5,432.10
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//function declaration
bool dollar_format(string &);
int main() {
	string input;

	//get dollar amount from user
	cout << "Enter a dollar amount in the form nnnnn.nn: ";
	getline(cin,input);
	
	//format the input
	cout << fixed << setprecision(2) << showpoint;
	if (dollar_format(input)) {
		cout << "Here is the input formatted: " << input;		
	} else {
		cout << "Bad string, try again..." << endl;
	}

	return 0;
}

bool dollar_format(string &input) {
	int periodIndex;
	periodIndex = input.find('.');	
	if (periodIndex == -1) return false;
	if (periodIndex > 3 ) {
		for (int x = periodIndex - 3; x > 0; x -=3) input.insert(x,",");
	} 
	input.insert(0,"$");
	return true;
}
