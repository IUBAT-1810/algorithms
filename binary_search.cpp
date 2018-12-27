// This code will print the index number if it findds the data
// Else it will print -1

#include <iostream>
#include <fstream>
using namespace std;

int BinSearch(int data[], int n, int x) {
	int L = 0, R = n-1;

	while(L <= R) {
		int mid = (L+R)/2;
		if(data[mid] == x) {
			return mid;
		}

		if(data[mid] < x) {
			L = mid+1;
		} else{
			R = mid-1;
		}

	}

	return -1;
}

int main()
{
	int n, x;
	int ageList[] = {12, 13, 14, 18, 19, 20, 22, 25, 29, 35};
	n = sizeof(ageList)/sizeof(ageList[0]);

	cout << "What number are you looking for: ";
	cin >> x;

	cout << BinSearch(ageList, n, x) << endl;

	return 0;
}