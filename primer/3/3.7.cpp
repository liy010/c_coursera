#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string s("Hello World");
    char x = 'X';
    for (char &c : s)
        if (isspace(x))
            c = ' ';
        else
            c = x;
    cout << s << endl;
    return 0;
}