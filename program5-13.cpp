//The purpose of this file is to experiment using the 
//programming concept of "sentinel".  The idea behind 
//the sentinel is that you continue to run a loop until
//a predetermined value ends it.  In this case, the 
//sentinel is -1
#include <iostream>
using namespace std;

int main() {
	
	int points, total;	
	total = 0;
	cout << "Please enter scores of each game, entering between entries.  Enter -1 when done: ";
	cin >> points;
	while (points != -1) {
		total += points;	
		cout << "Please enter scores of each game, entering between entries.  Enter -1 when done: ";
		cin >> points;
	}
	cout << "The total of all the games is: " << total;
	return 0;
}
