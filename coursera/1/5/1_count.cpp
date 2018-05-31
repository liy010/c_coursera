#include <iostream>
using namespace std;

int main() {
    int n, a[n];
    cout << "输入若干个整数，输出对应2进制下1的个数" <<endl;
    cout << "输入要给出的整数的个数：" <<endl;
    cin >>n;
    cout << "输入相应的整数：" <<endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        int s = 0, m = a[i];
        while (m > 0) {
            if (m % 2 == 1) {
                m /= 2;
                s++;
            } else {
                m /= 2;
            }
        }
        cout << s <<endl;
    }
    return 0;
}