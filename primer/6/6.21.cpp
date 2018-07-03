#include <iostream>
using namespace std;

int compare(const int x, const int *y) {
    if (x > *y)
        return x;
    else 
        return *y;
}

int main() {
    int m, n;
    cin >> m >> n;
    int result = compare(m, &n);
    cout << result << endl;
    return 0;
}