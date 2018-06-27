#include <iostream>
using namespace std;

int main() {
    int a[10];
    int *first = a;
    for (int i = 0; i < 10; i++)
        *(first + i) = 1;

    for (auto i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}