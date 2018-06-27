#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string s;
    // while (getline(cin, s))
    //     cout << s << endl;
    // return 0;
    while (cin >> s) {
        cout << s << endl;
    }
    return 0;
}