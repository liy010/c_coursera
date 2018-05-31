#include <iostream>
using namespace std;

int main() {
    int a, b, c[6];
    for (int i = 0; i < 6; i++) {
        cin >> c[i];
    }
    int tmp = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5 - i; j++) {
            if (c[j] < c[j+1]) {
                tmp = c[j+1];
                c[j+1] = c[j];
                c[j] = tmp; 
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        if (c[i] % 2 == 1) {
            a = c[i];
            break;
        }
    }

    for (int i = 5; i > -1; i--) {
        if (c[i] % 2 == 0) {
            b = c[i];
            break;
        }
    }

    int d = a - b;
    if (d < 0) {
        d = 0 - d;
        cout << d <<endl;
    } else {
        cout << d <<endl;
    }
    return 0;
}