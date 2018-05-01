// The purpose of this file is to experiment with the C++ Struct
// and using it in an array
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

struct PayRoll {
	double hoursWorked, hourlyPay, grossPay;
};


int main() {
	const int EMPLOYEE_NUM = 3;
	PayRoll employees[EMPLOYEE_NUM];
	
	//get the users information
	cout << "Enter the hours worked for three employees\n\n";
	for(int counter = 0; counter < EMPLOYEE_NUM; counter++) {
		cout << "How many hours did the employee " << counter + 1 << " work?: ";
		cin >> employees[counter].hoursWorked;	
		cout << "What is the employee " << counter + 1 << "'s hourly pay?: ";
		cin >> employees[counter].hourlyPay;
	}

	//calculate gross pay
	for(int counter = 0; counter < EMPLOYEE_NUM; counter++) {
		employees[counter].grossPay = employees[counter].hoursWorked * employees[counter].hourlyPay;
	}

	//print out results
	cout << "Here is the employee's payroll data: " << endl;
	for (int counter = 0; counter < EMPLOYEE_NUM; counter ++) {
		cout << "\nEmployee " << counter + 1 << ": " << endl;
		cout << "Hours Worked: " << employees[counter].hoursWorked << endl;
		cout << "Hourly Pay: " << employees[counter].hourlyPay << endl;
		cout << fixed << showpoint << setprecision(2);
		cout << "Gross Pay: $" << employees[counter].grossPay << endl;
	}

	return 0;
}
