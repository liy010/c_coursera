#include <iostream>
using namespace std;

void print(const int *m, int i) {
    if (m)
        while (*m)
            cout << *m++ << " ";
}

void print(const int *beg, const int *end) {
    while (beg != end)
        cout << *beg++ << " ";
}

// void print(const int ia[], size_t size) {
//     for (size_t i = 0; i != size; ++i) {
//         cout << ia[i] << " ";
//     }
// }

int main() {
    int i = 0, j[2] = {0, 1};
    print (j, i);
    print(begin(j), end(j));
    //print(j, end(j) - begin(j));
    return 0;
}