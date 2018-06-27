#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> s(11, 0);
    int m;
    auto first = s.begin();
    while (cin >> m) {
        ++*(first+m/10);
    }  
    
    for (int i = 0; i < 11; i++) {
        cout << s[i] << " ";
    }
    return 0;
}