//General Crates, Inc. builds custom-designed wooden crates. With materials and labor, it
//costs GCI $0.23 per cubic foot to build a crate. In turn, they charge their customers $0.50
//per cubic foot for the crate. You have been asked to write a program that calculates the
//volume (in cubic feet), cost, customer price, and profit of any crate GCI builds. 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const double COST_PER_CUBIC_FOOT = .23;
	const double CHARGE_PER_CUBIC_FOOT = .5;

	double  length, width, height,
		volume, cost, customerPrice, profit;
	cout << "Please enter the dimensions of the crate (width, length, and height separated by spaces): ";
	cin >> length >> width >> height;

	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	customerPrice = volume * CHARGE_PER_CUBIC_FOOT;
	profit = customerPrice - cost;
	
	cout << "Cost:   " << setw(8) << "$" << cost << endl
	     << "Price:  " << setw(8) << "$" << customerPrice << endl
	     << "Profit: " << setw(8) << "$" << profit << endl;
	
	return 0;
}
