//Problem 12: Grade Point Equivalent Menu (Challenge)  [Difficult]

#include <iostream>
#include <string>

using namespace std;

int main() {

	int cho;
	char letter;
	int gpe;
	string rem;

	cout << "===== GRADE POINT LOOKUP =====" << endl;
	cout << "1) A+ 2) A 3) A- 4) B+" << endl;
	cout << "5) B 6) B- 7) C 8) F" << endl;
	cout << "Enter your choice: ";
	cin >> cho;

	switch (cho) {
	case 1:
		cout << "Letter Grade: A+" << endl;
		cout << "Grade Point Equivalent: 4.00" << endl;
		cout << "Remark: PASSED";
		break;
	case 2:
		cout << "Letter Grade: A" << endl;
		cout << "Grade Point Equivalent: 3.75" << endl;
		cout << "Remark: PASSED";
		break;
	case 3:
		cout << "Letter Grade: A-" << endl;
		cout << "Grade Point Equivalent: 3.50" << endl;
		cout << "Remark: PASSED";
		break;
	case 4:
		cout << "Letter Grade: B+" << endl;
		cout << "Grade Point Equivalent: 3.25" << endl;
		cout << "Remark: PASSED";
		break;
	case 5:
		cout << "Letter Grade: B" << endl;
		cout << "Grade Point Equivalent: 3.00" << endl;
		cout << "Remark: PASSED";
		break;
	case 6:
		cout << "Letter Grade: B-" << endl;
		cout << "Grade Point Equivalent: 2.75" << endl;
		cout << "Remark: PASSED";
		break;
	case 7:
		cout << "Letter Grade: C" << endl;
		cout << "Grade Point Equivalent: 2.00" << endl;
		cout << "Remark: PASSED";
		break;
	case 8:
		cout << "Letter Grade: F" << endl;
		cout << "Grade Point Equivalent: 0.00" << endl;
		cout << "Remark: FAILED";
		break;
	}
}