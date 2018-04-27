//This file is meant to help using fstream with 
//for loops
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int days, sales;
	ofstream outFile;

	//connect to output file sales.txt
	outFile.open("sales.txt");
	
	//get number of days of sales
	cout << "For how many days do you have sales? ";
	cin >> days;

	//retrieve users sales data
	for(int i = 0; i < days; i++) {
		cout << "Enter the sales for day " << i+1 << ": ";
		cin >> sales;

		//write sales data to outfile
		outFile << sales << endl; 	
	}
	return 0;
}
