#include <iostream>
using namespace std;

int main() {
    int n, k, a[n], b;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n - 1; j++){
            int tmp = 0;
            if (a[i] < a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
    b = a[k-1];
    cout << b <<endl;
    return 0;
}