#include<iostream>
using namespace std;

int main() {
    int n, m, k, x, y;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    k = n/2 + 1;
    if (n%2==0) {
        for (int i = 0; i< n; i++) {
            m = 0;
            for (int j = 0; j<n; j++) {
                if (a[i]<=a[j]){
                    m++;
                }
            }
            if (m == k) 
                x = a[i];
            if (m == k-1)
                y = a[i];
        }
        cout << (x + y) / 2 << endl;
    } else {
        for (int i = 0; i < n; i++) {
            m = 0;
            for (int j = 0; j < n; j++) {
                if (a[i] <= a[j])
                    m++;
            }
            if (m == k) {
                x = a[i];
            }
        }
        cout << x << endl;
    }
}