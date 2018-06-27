#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string s("some string");
    // if (!s.empty())
    //     s[0] = toupper(s[0]);
    // cout << s << endl;
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
        s[index] = toupper(s[index]);
    cout << s << endl;
    return 0;
}