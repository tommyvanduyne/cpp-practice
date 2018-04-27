//The purpose of this file is to get experience working with arrays
#include <iostream>
using namespace std;

int main() {
	const int EMPLOYEE_COUNT = 6;
	int hours[EMPLOYEE_COUNT];

	cout << "Input the hours of " << EMPLOYEE_COUNT << " Employees: ";
	for (int i = 0; i < EMPLOYEE_COUNT; i++) cin >> hours[i]; 
	for (int i = 0; i < EMPLOYEE_COUNT; i++) cout << "Employee " << i+1 << " worked " << hours[i] << " hours." << endl;

	return 0;
}
