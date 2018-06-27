#include <iostream>
using namespace std;

int main() {
    int m;
    while (cin >> m)
        if (m == 42)
            break;
        cout << m << endl;
    return 0;
}