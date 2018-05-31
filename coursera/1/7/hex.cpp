//把一个数以16进制的方式表示出来
#include <iostream>
using namespace std;

int main() {
    int a, c;
    cin >>a;
    cout <<"16进制表示："<< hex << a <<endl;
    cout <<"8进制表示：" << oct << a <<endl;
    cout << a <<endl; //如果直接打印a的话， 会以8进制的形式打印，如果想用10进制那么：
    cout << dec << a <<endl;
    cout << c <<endl;
    return 0;
}