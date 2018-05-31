#include <iostream>
using namespace std;

int main() {
    int n, a[100], tmp = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > tmp) {
            tmp = a[i];
        }

    }
    cout << tmp <<endl;
    return 0;
}