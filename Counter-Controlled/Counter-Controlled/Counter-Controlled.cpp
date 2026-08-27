#include <iostream>
using namespace std;

int main() {
	//Counter Controlled
	int counter = 1;
	while (counter <= 10)
	{
		cout << counter << ". " << endl;
		++counter;
	}
	cout << endl;
	
	//
	for (int counter = 1; counter <= 10; counter++)
		cout << "- " << counter << "\n";

	cout << endl;

	//
	int i = 1;
	do
	{
		cout << "Iteration" << i << endl;
		i++;
	}
	while (i <= 5);

	cout << endl;

	//
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++) {
			cout << i * j << " ";
		}
	cout << endl;
	}

	cout << endl;

	//
	int count;
	for (count = 1; count <= 10; count++)
	{
		if (count == 5)
			break;
		cout << count << " ";
	}
	cout << "\n Broke out of a loop at count = " << count << endl;

	cout << endl;

	//
	for (count = 1; count <= 10; count++)
	{
		if (count == 5)
			continue;
		cout << count << " ";
	}
	cout << "\n Used to continue to skip printing " << count << endl;
}