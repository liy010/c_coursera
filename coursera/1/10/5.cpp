#include <iostream>
using namespace std;

int main() {
    int a[100][100], N, m;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < N-1; i++) {
        for (int j = 1; j < N-1; j++) {
            if (a[i][j+1] - a[i][j] >= 50)
            if (a[i][j-1] - a[i][j] >= 50)
            if (a[i-1][j] - a[i][j] >= 50)
            if (a[i+1][j] - a[i][j] >= 50)
                m++;
        }
    }

    cout << m <<endl;
    return 0;
}