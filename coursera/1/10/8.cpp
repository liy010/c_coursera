#include <iostream>
using namespace std;

int main() {
    int L, M, l[10000], m[100][2], a, b, result=0;
    cin >>L >> M;

    for (int i = 0; i < L+1; i++) {
        l[i] = 1;
    }

    for (int i = 0; i < M; i++) {
        cin >> m[i][0] >> m[i][1];
    }
    
    for (int i = 0; i < M; i++) {
        a = m[i][0];
        b = m[i][1];
        for (a; a < b+1; a++) {
            l[a] = 0;
        }
    }

    for (int i = 0; i < L + 1; i++) {
        result += l[i];
    }

    cout << result << endl;
    return 0;
}
