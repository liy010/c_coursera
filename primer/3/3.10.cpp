#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string s;
    while (cin >> s)
        for (auto &c : s)
            if (!ispunct(c))
                cout << c;
    return 0;
}