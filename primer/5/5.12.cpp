#include <iostream>
#include <string>
using namespace std;

int main() {
    int ffCnt = 0, fiCnt = 0, flCnt = 0;
    string a;
    cin >> a;
    auto beg = a.begin(), end = a.end();
    for (beg; beg != end && !isspace(*beg); ++beg) {
        if (*beg == 'f' && *(beg+1) == 'f') {
            ++ffCnt;
        }
        if (*beg == 'f' && *(beg+1) == 'i') {
            ++fiCnt;
        }
        if (*beg == 'f' && *(beg+1) == 'l') {
            ++flCnt;
        }
    }
    cout << ffCnt << endl;
    cout << fiCnt << endl;
    cout << flCnt << endl;
    return 0;
}