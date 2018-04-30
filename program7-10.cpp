//the purpose of this file is to experiment with range based
//foor loops
#include <iostream>
using namespace std;

int main() {
	int numbers[] = {10, 20, 30, 40, 50};

	//loop through the numbers using range-based method
	cout << "The numbers in the array are as follows: ";
	for (int number : numbers) cout << number << " ";
	return 0;
}
