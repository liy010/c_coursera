#include <iostream>
using namespace std;

void change(int a[]) {
    a[0] = 30; a[1] = 50;
}

int main() {
    int a[2] = {3, 5};
    change(a); //当以数组名传递参数时， 传递的是数组的地址， 此时在change这个函数里改变数组a的值时
               //就会把main里的a的值也改变了， 如果这样调用则不会  change(a[0], a[1])
    cout << a[0] << ""
         << a[1] << endl;
    return 0;
}