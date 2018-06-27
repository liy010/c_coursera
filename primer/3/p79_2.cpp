#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    string line;
    while (getline(cin, line))
        if (line.size() > 80)
            cout << line << endl;
    return 0;
}