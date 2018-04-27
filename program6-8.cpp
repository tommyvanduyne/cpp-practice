//this program shows the sum of 3 user-given numbers
#include <iostream>
using namespace std;

//function prototypes
void show_sum(double, double, double);

int main() {
	double num1, num2, num3;
	
	//get numbers from user
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;

	//call the sum function
	show_sum(num1, num2, num3);
	
	cout << "Done." << endl;
	return 0;
}

void show_sum(double num1, double num2, double num3) {
	double sum;
	
	//sum the numbers
	sum = num1 + num2 + num3;
	
	//print the sum
	cout << "The sum is: " << sum << endl;
}
