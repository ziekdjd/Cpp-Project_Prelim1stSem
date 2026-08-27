#include <iostream>
using namespace std;

int main() {

	int num1, num2;
	char l = 0;

	cout << "Please Enter First Number:" << endl;
	cin >> num1;
	cout << "Please Enter Second Number:" << endl;
	cin >> num2;

	cout << "Please Enter Proccess\n ( + - * / ) or 'a' for all" << endl;
	cin >> l;
	
	if (l == '+') {
		cout << "The Answer is: " << num1 + num2;
	}
	else if (l == '-') {
		cout << "The Answer is: " << num1 - num2;
	}
	else if (l == '*') {
		cout << "The Answer is: " << num1 * num2;
	}
	else if (l == '/') {
		cout << "The Answer is: " << num1 / num2;
	}

	else if (l == 'a') {
		cout << "The Sum is: " << num1 + num2 << endl;
		cout << "The Difference is: " << num1 - num2 << endl;
		cout << "The Product is: " << num1 * num2 << endl;
		cout << "The Quotient is: " << num1 / num2 << endl;
	}
}