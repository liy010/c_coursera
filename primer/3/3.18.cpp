#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::vector;

int main() {
    vector<int> s;
    int m;
    while (cin >> m) 
        s.push_back(m);
    
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
        cout << s[i] + s[i+1] << endl;
    
    cout << "---------------------" << endl;

    for (int i = 0; i < n; i++)
        cout << s[i] + s[n-i-1] << endl;
    return 0;
}