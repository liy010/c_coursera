#include <iostream>
using namespace std;

int main() {
    int n, k, a[n];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int j = i+1;
        for (j; j < n; j++) {
            if (a[i] + a[j] == k){
                cout << "yes" <<endl;
                break;
            }
            if (i == n-2) {
                cout << "no" <<endl;
            }
        }

    }
    return 0;
}