#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, last_a;
    int n;
    while (cin >> a) {
        if (a == last_a) {
            ++n;
        } else {
            last_a = a;
            n = 0;
            ++n;
        }
        if (n == 2) {
            cout << last_a << " 出现了两次" << endl;
            return 0;
        } 
    }
    cout << "没有两个单词是连续重复出现的" << endl;
    return 0;
}