#include <iostream>
using namespace std;

int count() {
    static int t = 0;
    return t++;
}

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cout << count() << endl;
    }
    return 0;
}