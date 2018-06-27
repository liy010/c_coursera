#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d) {
        cout << "满足条件" << endl;
        cout << a << " " << b << " " << c << " " << d << endl;
    } else {
        cout << "不满足条件:" << endl;
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    return 0;
}