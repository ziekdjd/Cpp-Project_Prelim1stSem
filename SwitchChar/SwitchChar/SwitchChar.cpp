#include <iostream>
using namespace std;

int main() {

	char letter;

	cout << "Choose your letter to reveal the Grade" << endl;
	cout << " A - Excellent" << endl;
	cout << " B - Very Good" << endl;

	cout << "Enter your Letter: ";
	cin >> letter;

	switch (letter) {
	case 'A':
	case 'a':
		cout << "Excellent! Ang Galing mo!";
		break;

	case 'B':
	case 'b':
		cout << "Very Good! Mahisay (clap 3x)";
		break;
	
	default:
		system("cls");
		return main();
	}
}