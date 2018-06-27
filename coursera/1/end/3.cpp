#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    int n;
    double a[100][2], k, result = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            k = sqrt(pow(a[i][0]-a[j][0], 2) + pow(a[i][1] - a[j][1], 2));
            if (k > result)
                result = k;
        }
    }
    cout <<fixed << setprecision(4) << result <<endl;
    return 0;
}
