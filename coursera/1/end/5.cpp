#include <iostream>
using namespace std;

int main() {
    char a[11], b[4], c[11], m, tmp;
    int n, j = 0;
    cin >> a >> b;
    for (int i = 0; i < 11; i++) {
        if (a[i] > a[i+1]) {
            m = a[i];
            n = i;
        } else {
            m = a[i+1];
            n = i + 1;
        }
    }
    
    while (a[n+1] != '\0') {
        c[i] = a[n+1];
        j++;
        n++;
    }

    j = 0;
    for (n+1; n < 11; n++) {
        a[n+1] = b[j];
        j++;
    }

    cout << a + c << endl;
    return 0;
}