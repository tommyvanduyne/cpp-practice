// This program shows the donations made to the United Cause 
// by employees of CK Graphics, Inc. It displays
// the donations in order of lowest to highest
// and in the original order they were received
#include <iostream>
using namespace std;

//function declarations
void selectionSort(int *[], const int);
void showArray(int [], const int);
void showPtrArray(int *[], const int);

int main() {
	const int NUM_DONATIONS = 15; //Number of donations
	int donations[NUM_DONATIONS] = {23,25,26,37,6,
					89,8,67,56,37,
					12,15,10,20,30};
	int *ptrArr[NUM_DONATIONS] = {nullptr,nullptr,nullptr,nullptr,nullptr,
					nullptr,nullptr,nullptr,nullptr,nullptr,
					nullptr,nullptr,nullptr,nullptr,nullptr};

	//first, copy the donations array into the ptrArr
	for(int counter = 0; counter < NUM_DONATIONS; counter++) {
		ptrArr[counter] = &donations[counter];
	}	

	//second, sort the array using selection sort
	selectionSort(ptrArr, NUM_DONATIONS);
	
	//third, print out initial array
	showArray(donations, NUM_DONATIONS); 

	//forth print out the pointer array 
	cout << endl;
	showPtrArray(ptrArr, NUM_DONATIONS);
	return 0;
}
void showPtrArray(int *ptrArr[], const int NUM_DONATIONS) {
	for (int counter = 0; counter < NUM_DONATIONS; counter++) cout << *ptrArr[counter] << " ";
}
void showArray(int donations[], const int NUM_DONATIONS) {
	for (int counter = 0; counter < NUM_DONATIONS; counter++) cout << donations[counter] << " ";
}
void selectionSort(int *ptrArr[], const int NUM_DONATIONS) {
	int curr, next, mindex;
	int *min;
	for(curr = 0; curr < NUM_DONATIONS - 1; curr++) {
		min = ptrArr[curr];
		mindex = curr;
		for (next = curr + 1; next < NUM_DONATIONS; next++) {
			if (*min > *ptrArr[next]) {
				min = ptrArr[next];
				mindex = next;
			} 
		}
		//switch curr with minimum element in arr
		if (mindex != curr) {
			ptrArr[mindex] = ptrArr[curr];			
			ptrArr[curr] = min;			
		} 
	}	
}
