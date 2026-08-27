#include <iostream>
using namespace std;

int main() {
    int c;

    system("cls");
    cout << "1 Number Printer" << endl;
    cout << "2 Simple Greeter Menu" << endl;
    cout << "3 Multiplication Table" << endl;
    cout << "4 Countdown Timer" << endl;
    cout << "5 Sum of Even Numbers in a Range" << endl;
    cout << "6 Character Repeater" << endl;
    cout << "\nChoose a Program: ";
    cin >> c;

    if (c == 1) {
        system("cls");
        int n, sum = 0;

        cout << "Enter a positive integer: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "\nTotal sum: " << sum << endl;

        system("pause");
        return main();
    }

    else if (c == 2) {
        system("cls");
        int choice;

            cout << "\nMenu\n";
            cout << "1. Greet Me\n";
            cout << "2. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Hello! Nice to meet you!" << endl;
            }
            else if (choice == 2) {
                cout << "Goodbye!" << endl;
            }
            else {
                cout << "Invalid choice. Please try again." << endl;
            }

        system("pause");
        return main();
    }

    else if (c == 3) {
        system("cls");
        int N;

        cout << "Enter an integer: ";
        cin >> N;

        for (int i = 1; i <= 10; i++) {
            cout << N << " x " << i << " = " << N * i << endl;
        }

        system("pause");
        return main();
    }

    else if (c == 4) {
        system("cls");
        int N;

        cout << "Enter a positive integer N: ";
        cin >> N;

        while (N >= 1) {
            cout << N << endl;
            N--;
        }

        cout << "Blastoff!" << endl;

        system("pause");
        return main();
    }

    else if (c == 5) {
        system("cls");

        int start, end;
        int sum = 0;

        cout << "Enter the starting positive integer: ";
        cin >> start;

        cout << "Enter the ending positive integer: ";
        cin >> end;

        for (int i = start; i <= end; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }

        cout << "Sum of even numbers: " << sum << endl;

        system("pause");
        return main();
    }

    else if (c == 6) {
        system("cls");

        char character;
        int C;

        cout << "Enter a character: ";
        cin >> character;

        cout << "Enter repetition count C: ";
        cin >> C;

        for (int i = 1; i <= C; i++) {
            cout << character;
        }

        cout << endl;

        system("pause");
        return main();
    }

    else {
        return main();
    }
}

