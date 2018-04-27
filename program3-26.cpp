//This file will allow the user to roll 2 die when run
#include <iostream>
#include <cstdlib> //this is to get rand() and srand()
#include <ctime> //this is to get time()
using namespace std;

int main() {
	int die1, //to hold the value of the first die
	    die2; //to hold the value of the second die
	const int MAX = 6;
	const int MIN = 1;
	
	unsigned seed = time(0);	
	srand(seed); //generate new random numbers each time
	
	die1 = (rand() % (MAX - MIN + 1) + MIN);
	die2 = (rand() % (MAX - MIN + 1) + MIN);

	cout << "Rolling the dice.." << endl;
	cout << die1 << endl;
	cout << die2 << endl;
	
	return 0;
}
