#include <iostream>
using namespace std;

int main() {
    int n, a=0, b=0, c=0, d=0, e=0, f=0;
    cin >> n;
    if (n >= 100) {
        a = n / 100;
        n = n % 100;
    }
    if (n >= 50) {
        b = 1;
        n = n % 50;
    }
    if (n >= 20) {
        c = n / 20;
        n = n % 20;
    }
    if (n >= 10) {
        d = 1;
        n = n - 10;
    }
    if (n >= 5) {
        e = 1;
        n = n - 5;
    }
    f = n;
    cout << a <<endl;
    cout << b <<endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}