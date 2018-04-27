//This program asks the user to enter the length and width of 
//a rectangle. It calculates the rectangle's area and displays
//the value on the screen
#include <iostream>
using namespace std;

int main() {
	int area, length, width;
	
	cout << "Enter the length:";
	cin >> length;
	cout << "Enter the width:";
	cin >> width;

	area = length * width;
	cout << "The area of your rectangle is " << area << endl;	
	return 0;
}	
