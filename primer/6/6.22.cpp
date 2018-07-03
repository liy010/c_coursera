#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int *tmp  = nullptr;
    tmp = x;
    x = y;
    y = tmp;
    cout << *x << " " << *y << endl;
}

int main() {
    int m, n;
    cin >> m >> n;
    swap(&m, &n);
    cout << m << " " << n << endl;
    return 0;
}