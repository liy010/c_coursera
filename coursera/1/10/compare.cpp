#include <iostream>
using namespace std;

 main() {
    char a[80], b[80];
    int c = 0, i=0;
    cin.getline(a, 80);
    cin.getline(b, 80);

    while (a[i] != '\0' | b[i] != '\0') {
        if (a[i] == b[i] | a[i] - 32 == b[i] | a[i] + 32 == b[i]) {
            i++;
            c = 1;
        } else {
            c = 0;
            if (a[i] > b[i]) {
                cout << ">" <<endl;
                break;
            } else {
                cout << "<" <<endl;
                break;
            }
        }
    }
    if (c == 1) 
        cout << "=" <<endl;
    return 0;
}