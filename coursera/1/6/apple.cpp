#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    if (y % x == 0) {
        int c = y / x;
        if (n - c <= 0) {
            cout << '0' <<endl;
        } else {
            cout << n - c << endl;
        }
    } else {
        int c = y  / x + 1;
        if (n - c <= 0) {
            cout << '0' <<endl;
        } else {
            cout << n - c <<endl;
        }
    }
    
}
