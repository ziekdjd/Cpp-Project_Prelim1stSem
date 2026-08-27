#include <iostream>
using namespace std;

int main() {
	int grade;

	cout << "Enter your Grade:" << endl;
	cin >> grade;

	if (grade <= 79) 
		cout << "Not quite bad for a Normal Student";
	
	else if (grade <= 89) 
		cout << "Wow! You Did Great!";
	
	else if (grade <= 100) 
		cout << "THAT IS AMAZING!! YOU ACED THE WHOLE CLASS!";
	
	else if (grade < 75) 
		cout << "Oh No! You Failed this Class";
	
}