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
    return 0;
}