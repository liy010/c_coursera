#include <iostream>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        if (a <= 0) 
            continue;
        else {
            cout << a << endl;
            break;
        }
    }
    return 0;
}