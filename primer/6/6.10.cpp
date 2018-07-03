#include <iostream>
using namespace std;

void transfor(int *ip1, int *ip2) {
    int tmp;
    tmp = *ip1;
    *ip1 = *ip2;
    *ip2 = tmp;
}

int main() {
    int a = 1, b = 2;
    transfor(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}