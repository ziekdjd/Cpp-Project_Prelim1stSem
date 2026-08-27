#include <iostream>
#include <string>
using namespace std;

int main() {
	int length;
	char hasUppercase, hasDigit, hasSpecial;

	cout << "Password Length: ";
	cin >> length;

	cout << "Is Uppercase? (Y/N): ";
	cin >> hasUppercase;

	cout << "Has a Digit? (Y/N): ";
	cin >> hasDigit;

	cout << "Has s Special Character? (Y/N): ";
	cin >> hasSpecial;

	int criteriaMet = 0;
	if (hasUppercase == 'y' || hasUppercase == 'Y') criteriaMet++;
	if (hasDigit == 'y' || hasDigit == 'Y') criteriaMet++;
	if (hasSpecial == 'y' || hasSpecial == 'Y') criteriaMet++;

	string strength;
	if (length >= 8 && criteriaMet == 3) { strength = "Strong"; }
	else if (length >= 6 && criteriaMet >= 2) { strength = "Medium"; }
	else { strength = "Weak"; }

	cout << "Password Strength: " << strength << endl;

	system("pause");
	system("cls");

	return main();
}
