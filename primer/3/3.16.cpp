#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::vector;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << "v1 " << v1.size() <<endl;
    cout << "v2 " << v2.size() <<endl;
    cout << "v3 " << v3.size() <<endl;
    cout << "v4 " << v4.size() <<endl;
    cout << "v5 " << v5.size() <<endl;
    cout << "v6 " << v6.size() <<endl;
    cout << "v7 " << v7.size() <<endl;
    for (auto &i : v6)
        cout << i << endl;

    for (auto &i : v5)
        cout << i << endl;
}