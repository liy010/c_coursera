#include <iostream>
#include <string>
using namespace std;

int main() {
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, nextLine = 0, t = 0, space = 0;
    string a;
    cin >> noskipws >> a;
    auto beg = a.begin(), end = a.end();
    for (beg; beg != end && !isspace(*beg); ++beg) {
        if (tolower(*beg) == 'a') {
            ++aCnt;
            // ++beg;
        }
        if (tolower(*beg) == 'e') {
            ++eCnt;
            // ++beg;
        }
        if (tolower(*beg) == 'i') {
            ++iCnt;
            // ++beg;
        }
        if (tolower(*beg) == 'o') {
            ++oCnt;
            // ++beg;
        }
        if (tolower(*beg) == 'u') {
            ++uCnt;
            // ++beg;
        }
        if (*beg == '\t') {
            ++t;
        }
        if (*beg == ' ') {
            ++space;
        }
        if (*beg == '\n') {
            ++nextLine;
        }
    }
    cout << aCnt << endl;
    cout << eCnt << endl;
    cout << iCnt << endl;
    cout << oCnt << endl;
    cout << uCnt << endl;
    return 0;
}