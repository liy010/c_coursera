#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);

    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0)
        ++beg;
    if (beg == v.end())
        cout << "全部大于零" <<endl;
    else 
        cout << "至少有一个小于零" <<endl;
    return 0;
}