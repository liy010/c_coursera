#include <iostream>
using namespace std;

int ff(int n) {
    if (n > 0)
        return n;
    else 
        return -n;
}

int main() {
    int m, n;
    cin >> m;
    n = ff(m);
    cout << n << endl;
    return 0;
}