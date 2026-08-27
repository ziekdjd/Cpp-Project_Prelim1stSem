#include <iostream>
using namespace std;

int main() {
    int op;
    char a;
    int num1, num2;
    cout << "Select Operation to Perform" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cout << "5 - Exit" << endl;
    cin >> op;

    if (op == 1)
        a = 'A';
    else if (op == 2)
        a = 'S';
    else if (op == 3)
        a = 'M';
    else if (op == 4)
        a = 'D';
    else if (op == 5)
        return 0;
    else {
        system("cls");
        cout << "Please enter a Valid Choice" << endl;
        return main();
    }

    switch (a) {
    case 'A':
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "The Sum is: " << num1 + num2 << endl;
        break;
    case 'S':
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "The Difference is: " << num1 - num2 << endl;
        break;
    case 'M':
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "The Product is: " << num1 * num2 << endl;
        break;
    case 'D':
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "The Quotient is: " << num1 /
            num2 << endl;
        break;
    }

    return 0;
}
