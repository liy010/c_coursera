#include <iostream>
#include <string>
using namespace std;

string::size_type find_char (const string &s, char c, string::size_type &occurs) {
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); i++) {
        if (c == s[i]) {
            if (ret == s.size()) 
                ret = i;
            ++occurs;
        }
    }
}

int main() {
    string::size_type ctr;
    string s;
    cin >> s;
    auto index = find_char(s, 'o', ctr);
    cout << index << " " << ctr << endl;
    return 0;
}