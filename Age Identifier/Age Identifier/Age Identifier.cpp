#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Enter your age: ";
	cin >>
		age;

	if (age >= 60) {
		cout << "Senior";
	}
	else if (age >= 30) {
		cout << "Adult";
	}
	else if (age >= 20) {
		cout << "Young Adult";
	}
	else if (age >= 13) {
		cout << "Teens";
	}
	else if (age >= 6) {
		cout << "Kid";
	}
	else if (age >= 0) {
		cout << "Toddler";
	}
}