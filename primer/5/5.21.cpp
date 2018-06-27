#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, last_a;
    bool no_twice = false;

    while (cin >> a) {
        if (!isupper(a[0]))
            continue;
        if (last_a == a) {
            cout << a << " occurs twice in succession." << endl;
            no_twice = true;
            break;
        }
        else 
            last_a = a;
    }
    if (!no_twice) cout << "no word was repeated." << endl;
}