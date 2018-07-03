#include <iostream>
#include <string>
using namespace std;

bool upper(const string &s) {
    bool a = false;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == toupper(s[i]))
            a = true;
    }
    return a;
}

void lower(string &s) {
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
}

int main() {
    string str;
    bool b;
    cin >> str;
    b = upper(str);
    if (b == true)
        lower(str); 

    cout << str << endl; 
    return 0;
}

// https://github.com/pezy/CppPrimer/blob/master/ch06/ex6_17.cpp
// #include <iostream>
// #include <string>

// using std::string;

// bool hasUppercase(const string& str)
// {
//     for (auto c : str)
//         if (isupper(c)) return true;
//     return false;
// }

// const string& makeLowercase(string& str)
// {
//     for (auto& c : str)
//         if (isupper(c)) c = tolower(c);
//     return str;
// }

// int main()
// {
//     string str("Hello World!");
//     std::cout << std::boolalpha << hasUppercase(str) << std::endl;
//     std::cout << makeLowercase(str) << std::endl;
// }