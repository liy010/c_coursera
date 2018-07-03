#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> li) {
    int m = 0; //m需要初始化为0， 否则输出结果为16
    for (auto &i : li) 
        m += i;
    return m;
}

int main() {
    int m;
    m = sum({1, 2, 3, 4, 5});
    cout << "{1, 2, 3, 4, 5} 相加等于: " << m << endl;
    return 0;
}