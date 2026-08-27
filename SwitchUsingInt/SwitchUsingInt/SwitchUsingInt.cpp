#include <iostream>
using namespace std;

int main() {
	int choice;
	
	cout << "1 - Apple" << endl;
	cout << "2 - Banana" << endl;

	cout << "Select your choice: ";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Apple yarn" << endl;
		cout << "Mansanas yarn" << endl;
		break;

	case 2:
		cout << "Banana yarn" << endl;
		break;
	
	default:
		cout << "wala yarn" << endl;
	}
}