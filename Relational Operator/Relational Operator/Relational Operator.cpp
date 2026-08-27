#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << ">" << b << endl;
    }
    if (a < b) {
        cout << a << "<" << b << endl;
    }
    if (a >= b) {
        cout << a << ">=" << b << endl;
    }
    if (a <= b) {
        cout << a << "<=" << b << endl;
    }
    if (a == b) {
        cout << a << "==" << b << endl;
    }
    if (a != b) {
        cout << a << "!=" << b << endl;
    }
}