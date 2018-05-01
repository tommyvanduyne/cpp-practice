//The point of this program is to see that if in fact
//a pointer to an array in a function call works the same
//way as an array
#include <iostream>
using namespace std;

//function declarations
//void show_numbers(int[], int);
void show_numbers(int*, int);

int main() {
	const int SIZE = 7;
	int numbers[SIZE] = {1,2,3,4,5,6,7};

	//first call the function using normal array call
	//show_numbers(numbers, SIZE);

	//second make the call using pointer
	show_numbers(numbers, SIZE);
	return 0;

}

void show_numbers(int numbers[], int size) {
	int counter;
	for (counter = 0; counter < size; counter++) cout << numbers[counter] << endl;
}

//void show_numbers(int *numbers, int size) {
//	int counter;
//	for (counter = 0; counter < size; counter++) cout << numbers[counter] << endl;
//}


