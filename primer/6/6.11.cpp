#include <iostream>
using namespace std;

void reset(int &i) {
    i = i * 2;
}

int main() {
    int a = 5;
    reset(a);
    cout << a << endl;
    return 0;
}