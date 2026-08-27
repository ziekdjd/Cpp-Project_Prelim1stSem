#include <iostream>
using namespace std;

int main() {
	int total = 0;
	int grade;
	int count = 8;

	for (int i = 1; i <= count; i++) {
		cout << "Enter grade #" << i << ": ";
		cin >> grade;
		total += grade;
	}

double average = (double)total / count;

cout << "Total: " << total << endl;
cout << "Average: " << average << endl;

if (average >= 75.0) {
	cout << "You Passed!" << endl;
}
else {
	cout << "You Failed!" << endl;
}

return 0;
}