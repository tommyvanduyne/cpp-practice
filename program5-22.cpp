//this file reads in numbers from file without knowing
//the length of the file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int number, counter;
	ifstream inputFile;
	
	//connect to file
	inputFile.open("ListOfNumbers.txt");
	
	//loop through the values and print to the user
	counter = 1;	
	while (inputFile >> number) {
		cout << "Number " << counter++ << ": " << number << endl;
	}	
	return 0;
	inputFile.close();
}
