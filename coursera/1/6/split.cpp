#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    a = n / 100;
    n = n % 100;
    b = n / 10;
    n = n % 10;
    c = n;
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
    return 0;
}