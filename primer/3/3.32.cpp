#include <iostream>
#include <vector>
using namespace std;

//使用数组拷贝
// int main() {
//     int a[10] = {}, b[10];
//     for (int i = 0; i < 10; i++) 
//         a[i] = i;

//     for (int i = 0; i < 10; i++)
//         b[i] = a[i];

//     for (auto i : b)
//         cout << i << " ";
//     cout << endl;
//     return 0;
// }
int main() {
    vector<int> a(10, 0);
    auto first = a.begin();
    for (int i = 0; i < 10; i++)
        *(first+i) = i;

    for (int i = 0; i < 10; i++) 
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
