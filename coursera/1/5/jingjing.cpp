#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "输入用数字1-7表示的星期: " <<endl;
    cin >> a;

    if (a == 1 || a == 3 || a == 5) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    } 
    return 0;
}

