#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string s, result;
    while (cin >> s) 
        result += s + " ";
    cout << result << endl;
    return 0; 
}