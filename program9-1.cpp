//the purpose of this file is to get used to the c++ 
//address operator &
#include <iostream>
using namespace std;

int main() {
	int x = 25;

	cout << "The address of x is " << &x << endl;
	cout << "The size of x is " << sizeof(x) << " bytes " << endl;
	cout << "The value of x is " << x << endl;
	return 0;
}
