#include <iostream>
using namespace std;

void transfor(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a, b;
    cin >> a >> b;
    transfor(a, b);
    cout << a << " " << b << endl;
    return 0;
}