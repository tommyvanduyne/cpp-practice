//This program accepts a number of the user and then
//shows the user successive powers of that number until
//the user types 'q' or 'Q'
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double number;
	char choice;
	bool ended = true;

	//get number from user
	cout << "Enter a number: ";
	cin >> number;

	//display powers of number until user relents
	for(int i = 1; i <= 10; i++){
		cout << number << " raised to the power of " << i 
		<< " is " << pow(number,i) << endl;
		cout << "continue? (y or q) ";
		cin >> choice;
		if (choice == 'q' || choice == 'Q') {
			ended = false;
			cout << "Game Over" << endl;
			break;
		}
	}
	if (ended) cout << "You made it to the end!" << endl;
	return 0;
}
