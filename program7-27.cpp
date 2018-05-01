//The purpose of this file is to get acquainted with
//the use of vectors from the C++ STL
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	//declare variables
	vector<int> hours;
	vector<double> payrate;
	int employeeNum;

	//Ask the user for how many employees they have
	cout << "How many employees do you have? ";
	cin >> employeeNum;

	//state purpose of program
	cout << "Enter the hours worked by " << employeeNum << " employees and their hourly rates" << endl;
	
	//get hours and hourly rate from user
	for(int i = 0; i < employeeNum; i++) {
		int tempHours;
		double tempPayrate;
		cout << "Hours worked by employee #" << i+1 << ": ";
		cin >> tempHours;
		hours.push_back(tempHours);
		cout << "Hourly payrate for employee #" << i+1 << ": ";
		cin >> tempPayrate;
		payrate.push_back(tempPayrate);
	}

	//Display results to user
	cout << "\nHere is the gross pay for each employee\n";
	//set formatting
	cout << fixed << showpoint << setprecision(2);
	for(int i = 0; i < employeeNum; i++) {
		double grosspay = hours[i] * payrate[i];	
		cout << "Employee #" << i+1 << ": $" << grosspay << endl;
	}
	return 0;
}


