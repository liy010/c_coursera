#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], m, n, x, y, tem = 0;
    cin >> m >> n;
    while (cin >> x)
        for (int i = 0; i < m; i++)
            a[i] = x;
    while (cin >> y)
        for (int i = 0; i < n; i++)
            b[i] = y;

    // if (m != n) {
    //     cout << "两个数组不相等" << endl;
    if (m == n){
        for (int i = 0; i < m; i++) {
            if (a[i] == b[i]) {
                tem++;
            }
        }
    }
    if (tem == m)
        cout << "两个数组相等" << endl;
    // else
    //     cout << "两个数组不相等" << endl;
    cout << tem << endl;
    return 0;
}