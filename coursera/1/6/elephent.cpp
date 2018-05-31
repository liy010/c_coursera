#include <iostream>
using namespace std;
 
int main() {
    double pi = 3.14159;
    int h, r;
    int a = 20000;
    cin >> h >> r;
    double v = pi * r * r * h;
    if (v < a) {
        int c = a / v;
        cout << c + 1 <<endl;
    } else {
        cout << 1 <<endl;
    }
}

//取余运算不能在int和double之间进行， 取余只能在int型之间
//double型转为int型， 直接把double小数点后面的去掉
//整型和浮点型也不能直接比较大小