//This program prompts the user for three test scores 
// and returns the average
#include <iostream>
using namespace std;

int main() {
	double test1, test2, test3, average;
	
	cout << "Please enter 3 test scores separated by a space: ";
	cin >> test1 >> test2 >> test3;
	average = (test1 + test2 + test3) / 3;
	cout << "The average of the 3 scores is " << average << endl;

	return 0;
}
