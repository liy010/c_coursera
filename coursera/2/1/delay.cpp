#include <iostream>
using namespace std;

void delay(int n) { //viod  空类型， 不需返回任何值
    for (int i = 0; i < n * 100000; i++)
        return;  //return返回空值，  也可以删掉return， 不返回值
}

int main() {
    for (int j = 0; j < 100; j++) {
        cout << j << endl;
        delay(1000); //这样延迟看看不出来差别
    }
    return 0;
}