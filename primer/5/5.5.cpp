#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> a = {"E", "D", "C", "B", "A"};
    int n;
    cin >> n;
    if (n < 60) {
        cout << a[4] << endl;
    } else {
        cout << a[n/10 - 5] << endl;
    }
    return 0;
}