#include <iostream>
using namespace std;

int main() {
    int grade;
    cin >> grade;
    if (grade > 90) 
        cout << "high pass" << endl;
    if (grade > 75) 
        cout << "pass" << endl;
    if (grade >= 60)
        cout << "low pass" <<endl;
    else
        cout << "fail" << endl;
    return 0;
}