#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string s("Hello World!!!");
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;
    return 0;
}