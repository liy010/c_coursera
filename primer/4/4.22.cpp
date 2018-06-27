#include <iostream>
#include <string>
using namespace std;

int main() {
    int grade;
    cin >> grade;
    string finalgrade;
    finalgrade = (grade > 90) ? "high pass"
                              : (grade < 60)? "fail"
                              : (grade > 75)? "pass" : "low_pass";
    cout << finalgrade << endl;
    return 0;
}