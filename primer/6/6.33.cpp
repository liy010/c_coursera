#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    if (beg != end) {
        cout << *beg << " ";
        print(++beg, end);  //不能使用beg++, 否则输出全是1
    }
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec.begin(), vec.end());
}