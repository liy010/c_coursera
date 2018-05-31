#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "输入若干个整数，输出对应2进制下1的个数" <<endl;
    cout << "输入要给出的整数的个数：" <<endl;
    cin >>n;
    cout << "输入相应的整数：" <<endl;

    for (int i = 0; i < n; i++) {
        int s = 0, a;
        cin >>a;
        while (a > 0) {
            if (a % 2 == 1) {
                a /= 2;
                s++;
            } else {
                a /= 2;
            }
        }
        cout << s <<endl;
    }
    return 0;
}