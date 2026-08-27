#include <iostream>
using namespace std;

int main() {
	system("cls");

	int prog;
	cout << "Choose your Program" << endl;
	cout << " 1 - Circle Calculator"<< endl;
	cout << " 2 - Simple Grade Converter"<< endl;
	cout << " 3 - Day Name from Number (switch)"<< endl;
	cin >> prog;

	if (prog == 1)
	{
		double radius;
		int PI = 3.1416;

		cout << "Enter Value for Radius: ";
		cin >> radius;

		cout << "Area: " << PI * (radius * radius) << endl;
		cout << "Circumference: " << 2 * PI * radius << endl;
	}
	else if (prog == 2)
	{
		int grade;
		char letter;

		cout << "Enter Your Grade: ";
		cin >> grade;

		if (grade >= 90)
			letter = 'A';
		else if (grade >= 80)
			letter = 'B';
		else if (grade >= 70)
			letter = 'C';
		else if (grade >= 60)
			letter = 'D';
		else
			letter = 'F';

		cout << "Your Grade: " << letter << endl;
	}

	else if (prog == 3)
	{
		int choice;

		cout << "Enter a day number (1-7): ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Day 1 is Sunday" << endl;
			break;
		case 2:
			cout << "Day 2 is Monday" << endl;
			break;
		case 3:
			cout << "Day 3 is Tuesday" << endl;
			break;
		case 4:
			cout << "Day 4 is Wednesday" << endl;
			break;
		case 5:
			cout << "Day 5 is Thursday" << endl;
			break;
		case 6:
			cout << "Day 6 is Friday" << endl;
			break;
		case 7:
			cout << "Day 7 is Saturday" << endl;
			break;
		case NULL:
			cout << "Please Enter a Valid Number" << endl;
		default:
			if (choice > 7)
				cout << "That number is over the limit. Please choose between 1-7" << endl;
		}
	}
	else if (prog > 3)
		cout << "Please enter a Valid Choice" << endl;
	system("pause");
	return main();
	}
