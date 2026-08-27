#include <iostream>
#include <string>
using namespace std;

int main() {
	string employee;
	int allowance;
	char type;
	system("cls");
	cout << "Enter employee type " << endl;
	cout << "(R)Regular (C)Contractual (P)Part-Time" << endl;
	cout << ">>";

	cin >> type;

	switch (type) {
	case 'r':
	case 'R':
		employee = "Regular";
		allowance = 2000.00;
		break;
	case 'c':
	case 'C':
		employee = "Contractual";
		allowance = 1000.00;
		break;
	case 'p':
	case 'P':
		employee = "Part-time";
		allowance = 500.00;
		break;
	default:
		cout << "Invalid Employee Type" << endl;
		system("pause");
		system("cls");
		return main();
	}

	cout << "Employee Type: " << employee << endl;
	cout << "Allowance: PHP " << allowance << endl;
	system("pause");
	return main();
}