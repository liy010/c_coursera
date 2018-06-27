#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string a, b;
    cin >> a >> b;
    // if (a > b)
    //     cout << a << endl;
    // if (a < b) 
    //     cout << b << endl;
    // if (a == b) 
    //     cout << "两个字符串相等" << endl;
    if (a.size() != b.size())
        if (a.size() > b.size())
            cout << a << endl;
        else
            cout << b << endl;
    return 0;
}