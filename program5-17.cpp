//This program writes a users input into a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int number1, number2, number3;
	ofstream outputFile;

	//connect to Numbers.txt
	outputFile.open("Numbers.txt");
	
	//Get three numbers from user
	cout << "Input first number: ";
	cin >> number1;
	cout << "Input second number: ";
	cin >> number2;
	cout << "Input third number: ";
	cin >> number3;

	//write the three numbers to the file
	cout << "Writing the numbers to Numbers.txt" << endl;
	outputFile << number1 << endl << number2 << endl << number3 << endl;
	return 0;
}
