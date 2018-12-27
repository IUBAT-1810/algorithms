#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int n, max;
	string filename;

	cout << "Maximum value: ";
	cin >> max;
	cout << "Number of element: ";
	cin >> n;
	cout << "Save to(file name): ";
	cin.ignore();
	getline(cin, filename);

	ofstream savedto;
	savedto.open(filename);

	for(int i = 0; i < n; i++) {
		savedto << 1+(rand())%max << endl;
	}
	savedto.close();

	cout << "Generation is complete. Good bye..." << endl; 

	return 0;
}