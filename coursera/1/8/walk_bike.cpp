#include <iostream>
using namespace std;

int main() {
    int n, a[n];
    double Bike = 0.0, Walk=0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        Bike = a[i] / 3.0 + 50;
        Walk = a[i] / 1.2;
        if (Bike < Walk) {
            cout << "Bike" << endl;
        } else if(Bike == Walk) {
            cout << "All" <<endl;
        } else {
            cout << "Walk" <<endl;
        }
    }
}