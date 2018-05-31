//自然除数
#include <iostream>
using namespace std;

int main() {
    int a, b;
    for (int i = 10; i < 100; i++) {
        a = i % 10;
        b = i / 10;
        if (i % (a + b) == 0) {
            cout << i <<endl;
        }
    }
    return 0;
}