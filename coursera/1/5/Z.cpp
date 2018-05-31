#include <iostream>
using namespace std;

int main() {
    int k, a[k], a1=0, a5=0, a10=0;
    cout << "准备输入整数的个数k,1<=k<=100： " << endl;
    cin >> k;
    cout << "输入k个1到10（包含1和10）的整数： "<< endl;
    for (int i = 0; i < k; i++)
        cin >> a[i];
    //cout <<a<<endl;
    for (int i = 0; i < k; i++)
        if (a[i] == 1){
            a1++;
        } else if (a[i] == 5) {
            a5++;
        } else if (a[i] == 10) {
            a10++;
        }
    cout << a1 << endl;
    cout << a5 << endl;
    cout << a10 << endl;
    return 0;
}