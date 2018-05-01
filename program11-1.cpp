// The purpose of this file is to experiment with the C++ Struct
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

struct PayRoll {
	int number;
	string name;
	double hoursWorked, hourlyPay;
};


int main() {
	PayRoll employee;
	double grossPay;
	
	//get the users information
	cout << "Enter the employee's number: ";
	cin >> employee.number;
	cout << "Enter the employee's name: ";
	cin.ignore();
	getline(cin, employee.name);
	cout << "How many hours did the employee work?: ";
	cin >> employee.hoursWorked;	
	cout << "What is the employee's hourly pay?: ";
	cin >> employee.hourlyPay;

	//calculate grosspay	
	grossPay = employee.hoursWorked * employee.hourlyPay;

	//print out results
	cout << fixed << showpoint << setprecision(2);
	cout << "Here is the employee's payroll data: " << endl;
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.number << endl;
	cout << "Hours Worked: " << employee.hoursWorked << endl;
	cout << "Hourly Pay: " << employee.hourlyPay << endl;
	cout << "Gross Pay: $" << grossPay << endl;

	return 0;
}
