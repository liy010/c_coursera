#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> n(10, 5);
    for (auto it =  n.begin(); it != n.end(); ++it)
        *it = *it * 2;

    for (int i = 0; i < n.size(); i++)
        cout << n[i] << " ";
    return 0;
}