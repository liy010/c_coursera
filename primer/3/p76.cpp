#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string s1;
    string s2(s1);
    string s2 = s1;
    string s3("value");
    string s3 = "value";
    string s4 = (20, "-");
    cout << s4 << endl;
}