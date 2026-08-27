#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    float result;
    result = num1 + num2;
    cout << "The sum is: " << result << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float score;
    char grade;
    cout << "Enter student's score: ";
    cin >> score;

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else
        grade = 'F';

    switch (grade) {
    case 'A':
        cout << "Excellent performance!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "Satisfactory." << endl;
        break;
    case 'F':
        cout << "Needs improvement." << endl;
        break;
    default:
        cout << "Invalid grade." << endl;
        break;
    }

    float bonus = score * 0.1;
    float finalScore = score + bonus;
    cout << "Final score with bonus: " << finalScore << endl;

    return 0;
}
