#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int n, a[n], b[n];
    cout << "输如整数的个数：" <<endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>a[n-i-1];
        //cout <<a[i]<<endl;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    return 0;
}
