#include <iostream>
using namespace std;

int main() {
    int n, m, a = 0;
    cout << "输入一个不大于300的数n： " << endl;
    cin >> n;
    cout << "输入一个不大于n的数m: " << endl;
    cin >> m;
    for (int i = m; i < n + 1; i++)
        if (i % 2 == 1) {
            a += i;
        }
    cout << "m与n之间所有的奇数和为： " << a << endl;
    return 0;
}