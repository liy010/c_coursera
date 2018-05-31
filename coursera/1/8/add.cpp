#include <iostream>
using namespace std;

int main() {
    int a[6], b, c=0;
    for (int i=0; i< 6; i++) {
        cin >> a[i];
    }
    
    b = a[0];
    for (int i=1; i<6; i++) {
        if (a[i] < b) {
            c += a[i];  
        }
    }
    cout << c <<endl;
    return 0;
}