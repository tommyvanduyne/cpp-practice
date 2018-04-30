//The purpose of this file is to get acquainted with
//the use of vectors from the C++ STL
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	//declare variables
	const int NUM_EMPLOYEES = 5;
	vector<int> hours(NUM_EMPLOYEES);
	vector<double> payrate(NUM_EMPLOYEES);

	//state purpose of program
	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their hourly rates" << endl;

	//get hours and hourly rate from user
	for(int i = 0; i < NUM_EMPLOYEES; i++) {
		cout << "Hours worked by employee #" << i+1 << ": ";
		cin >> hours[i];
		cout << "Hourly payrate for employee #" << i+1 << ": ";
		cin >> payrate[i];
	}

	//Display results to user
	cout << "\nHere is the gross pay for each employee\n";
	//set formatting
	cout << fixed << showpoint << setprecision(2);
	for(int i = 0; i < NUM_EMPLOYEES; i++) {
		double grosspay = hours[i] * payrate[i];	
		cout << "Employee #" << i+1 << ": $" << grosspay << endl;
	}
	return 0;
}


