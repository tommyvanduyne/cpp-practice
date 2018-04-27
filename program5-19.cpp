//The purpose of this file is to read in from Numbers.txt
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int number1, number2, number3;
	ifstream inputFile;
	
	//open connection to file
	inputFile.open("Numbers.txt");
	
	//read in the numbers
	inputFile >> number1;
	inputFile >> number2;
	inputFile >> number3;

	//output the numbers to the user
	cout << "Number1: " << number1 << endl;
	cout << "Number2: " << number2 << endl;
	cout << "Number3: " << number3 << endl;

	cout << "Done." << endl;
	return 0;
}
