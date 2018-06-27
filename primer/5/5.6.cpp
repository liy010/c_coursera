#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    string m = (a < 60)? "E"
                       : a < 70? "D"
                       : a < 80? "C"
                       : a < 90? "B" : "A";
    cout << m << endl;
    return 0;
}