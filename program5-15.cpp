//This is an example program for writing to a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream outFile;
	outFile.open("demo.txt");
	cout << "Now writing to the file" << endl;
	
	outFile << "Something to write to the file" << endl;
	outFile << "Something to write to the file" << endl;
	outFile << "Something to write to the file" << endl;
	outFile << "Something to write to the file" << endl;

	outFile.close();
	cout << "Done..." << endl;
	
	return 0;
}
