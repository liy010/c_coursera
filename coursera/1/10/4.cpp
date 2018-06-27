#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[5][5], n, m, tmp;
    for (int i =0; i< 5; i++) {
        for (int j=0; j<5; j++) {
            cin >> a[i][j];
        }
    }
    cin >> n >> m;
    if (n < 5 & m < 5 & n>=0 &m>=0) {
        for (int i=0; i<5; i++) {
            tmp = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = tmp;
        }

        for (int i = 0; i< 5; i++) {
            //cout<<a[i][0]<<" "<< a[i][1]<<" "<<a[i][2]<<" "<<a[i][3]<<" "<<a[i][4]<<endl;
            for (int j= 0; j<5; j++) {
                if (j<4)
                    cout<<setw(4)<<a[i][j];
                else 
                    cout <<setw(4) << a[i][j] <<endl;
            }
            
        }
    } else {
        cout << "error" << endl;
    }


    return 0;
}