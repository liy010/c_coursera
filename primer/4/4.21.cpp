#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b;
    int m;
    for (int i = 0; i < a.size(); i++) {
        m = (a[i]%2 != 0)? a[i] * 2 : a[i];
        b.push_back(m);
    }
    
    for (auto i : b)
        cout << i << " ";
    cout << endl;
    return 0;
}