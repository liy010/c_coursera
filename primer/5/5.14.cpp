#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string x, result_string, tmp_string;
    int result = 0;
    vector<string> a;
    while (cin >> x) 
        a.push_back(x);
    
    for (auto i : a) 
        cout << i << endl;

    for (int i = 0; i < a.size(); i++) {
        int tmp = 0;
        for (int j = 0; j < a.size(); j++) {
            if (a[i] == a[j]) {
                ++tmp;
                tmp_string = a[i];
            }
        }
        if (tmp > result) {
            result = tmp;
            result_string = tmp_string;
        }
    }

    if (result == 1) {
        cout << "没有单词出现超过一次" << endl;
    }
    cout << result_string << " : " << result<< endl;
    return 0;
}