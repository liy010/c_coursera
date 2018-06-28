#include <iostream>
using namespace std;

int fact(int m) {
    int result = 1;
    while (m > 0) {
        result *= m--;
    }
    return result;
}

int main() {
    int n, result;
    cin >> n;
    result = fact(n);
    cout << result << endl;
    return 0;
}