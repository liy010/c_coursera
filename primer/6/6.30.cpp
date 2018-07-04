#include <iostream>
#include <string>
using namespace std;

bool str_subrange(const string &str1, const string &str2) {
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size())? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return;
    }
}

int main() {
    string a, b;
    bool m;
    cin >> a >> b;
    m = str_subrange(a, b);
    return 0;
}

// 6.30.cpp:12:13: error: non-void function 'str_subrange' should return a value [-Wreturn-type]
//             return;
//             ^