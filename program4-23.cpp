//Sample program to practice writing switch statements
#include <iostream>
using namespace std;

int main() {
	char choice;
	cout << "Enter either 'A', 'B', or 'C': ";
	cin >> choice;
	switch(choice) {
		case 'A':
			cout << "You chose 'A'" << endl;
		break;
		case 'B': 
			cout << "You chose 'B'" << endl;
		break;
		case 'C':
			cout << "You chose 'C'" << endl;
		break;
		default:
			cout << "You did not choose one of the options" << endl;
	}
	return 0;
}
