#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> s;
    int c, result;
    while (cin >> c)
        s.push_back(c);
    
    auto first = s.begin();

    for (int i = 0; i < s.size()-1; i++)
        cout << *(first + i) + *(first + i + 1) << endl;;

        
    return 0;
}