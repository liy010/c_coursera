#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {0, 1, 1, 2}, b = {0, 1, 1, 2, 3, 5, 8};
    int m = 0;
    if (a.size() <= b.size()) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i])
                m = 1;
        }
        if (m == 1)
            cout << "a不是b的前缀" << endl;
        else 
            cout << "a是b的前缀" << endl;
    } else {
        for (int i = 0; i < b.size(); i++) {
            if (b[i] != a[i]) 
                m = 1;
        }
        if (m == 1)
            cout << "b不是a的前缀" << endl;
        else 
            cout << "b是a的前缀" << endl;
    }
    return 0;
}


// #include <iostream>
// #include <vector>

// using std::cout;
// using std::endl;
// using std::vector;

// int main()
// {
//     vector<int> vec1{0, 1, 1, 2};
//     vector<int> vec2{0, 1, 1, 2, 3, 5, 8};

//     auto size = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
//     for (decltype(vec1.size()) i = 0; i != size; ++i) {
//         if (vec1[i] != vec2[i]) {
//             cout << "false" << endl;
//             return 0;
//         }
//     }
//     cout << "true" << endl;
//     return 0;
// }