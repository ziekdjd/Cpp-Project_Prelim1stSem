#include <iostream>
using namespace std;

int main() {
	int sales;
	int earned;
	int rate;
	cout << "Enter total monthly sales: ";
	cin >> sales;

	if (sales <= 10000) {
		rate = 3;
		earned = sales * .03;
	}
	else if (sales <= 30000) {
		rate = 5;
		earned = sales * .05;

	}
	else if (sales <= 60000) {
		rate = 8;
		earned = sales * .08;
	}
	else if (sales > 60000) {
		rate = 12;
		earned = sales * .12;
	}

	cout << "Commission Rate: " << rate << "%" << endl;
	cout << "Commision Earned: PHP " << earned;
}