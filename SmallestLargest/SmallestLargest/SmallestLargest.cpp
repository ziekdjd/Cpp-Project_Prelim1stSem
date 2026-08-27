#include <iostream>
using namespace std;

/*
int main() {
	cout << "Input three integers: ";
	int small, large, a, b, c;
	cin >> a >> b >> c;

	cout << "Sum is: " << a + b + c << endl;
	cout << "Average is: " << (a + b + c) / 3 << endl;
	cout << "Product is: " << a * b * c << endl;
	small = a;
	if (b < small)
		small = b;
	if (c < small)
		small = c;

	cout << "Smallest is: " << small << endl;

	large = a;
	if (b > large)
		large = b;
	if (c > large)
		large = c;
	cout << "Largest is: "  << large << endl;
	*/

	/*
		if (a < b) {
			cout << "Smallest: " << a << endl;
		}
		else if (a < c) {
			cout << "Smallest: " << a << endl;
		}
		else if (b < a) {
			cout << "Smallest: " << b << endl;
		}
		else if (b < c) {
			cout << "Smallest: " << b << endl;
		}
		else if (c < a) {
			cout << "Smallest: " << c << endl;
		}
		else if (c < b) {
			cout << "Smallest: " << c << endl;
		}
		
		if (a > b) {
			cout << "Largest: " << a << endl;
		}
		else if (a > c) {
			cout << "Largest: " << a << endl;
			}
		else if (b > a) {
			cout << "Largest: " << b << endl;
			}
		else if (b > c) {
			cout << "Largest: " << b << endl;
			}
		else if (c > a) {
			cout << "Largest: " << c << endl;
			}
		else if (c > b) {
			cout << "Largest: " << c << endl;
		}
} */

int main() {
	int a, b, c;
	cout << "Enter Three Numbers" << endl;
	cin >> a >> b >> c;
	
	int sum = a + b + c;
	double average = sum / 3;
	int product = a * b * c;
	int small = min(a, min(b, c));
	int large = max(a, max(b,c));

	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Product: " << product << endl;
	cout << "Smallest: " << small << endl;
	cout << "Largest: " << large << endl;
}