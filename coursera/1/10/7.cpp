#include <iostream>
using namespace std;

int main() {
    int n = 0, k, tmp = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    k = n/2 + 1;
    cout << k <<endl;
    for (int i = 0; i < k; i++) {
        for (int j= i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    if (n % 2 == 0) {
        cout <<(a[k] + a[k-1])/2 <<endl; 
    } else {
        cout << a[k-1] << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}