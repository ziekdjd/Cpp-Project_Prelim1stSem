#include <iostream>
using namespace std;

int main() {
	int sales;
	int earned;
	int rate;
	cout << "Enter annual taxable income: ";
	cin >> sales;

	if (sales <= 250000) {
		earned = sales;
	}
	else if (sales <= 4000000) {
		earned = sales * .15;
	}
	else if (sales <= 500000) {
		earned = sales * .20 + 22500;
	}
	else if (sales <= 2000000)	{
		earned = sales * .25 + 102500;
	}
	else if (sales <= 8000000) {
		earned = sales * .30 + 402500;
	}
	else if (sales > 8000000) {
		earned = sales * .35 + 2202500;
	}
	
	cout << "Annual Income Tax Due: PHP " << earned;
}