#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c;
    cin >> a >> b >> c;
    if (c != '+' & c != '-' & c != '*' & c != '/')
        cout << "Invalid operator!" << endl;
    if (c == '+')
        cout << a + b << endl;
    if (c == '-') 
        cout << a - b << endl;
    if (c == '*') 
        cout << a * b << endl;
    if (c == '/') {
        if (b == 0) {
            cout << "Divided by zero!" << endl;;
        } else {
            cout << a / b << endl;
        }
    }



    return 0;
}