#include <iostream>
using namespace std;

int main() {
    int N, K;
    double V = 200;
    while(cin>>N>>K) {
        for (int i = 1; i < 100; i++) {
            if (N * i >= V) {
                cout << i << endl;
                break;
            } else {
                V += V * ((double)K/100);
                cout << V <<endl;
            }
            if (i == 99) {
                cout << "Impossible" << endl;
            }
        }
    }
}