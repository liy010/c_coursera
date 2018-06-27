#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::vector;

int main() {
    vector<string> s;
    string m;
    while (cin >> m) {
        s.push_back(m);
    }

    for (int i = 0; i < s.size(); i++)
        for (auto &j : s[i])
            j = toupper(j);

    for (int i = 0; i < s.size(); i++)
        cout << s[i] << endl;
    return 0;
}