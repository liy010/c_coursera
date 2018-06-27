#include <iostream>
using namespace std;

int main() {
    char s[80];
    int aCout=0, eCout=0, iCout=0, oCout=0, uCout=0, i=0;
    cin.getline(s, 80);
    while (s[i] != '\0') {
        switch(s[i]) {
            case 'a': aCout++; break;
            case 'e': eCout++; break;
            case 'i': iCout++; break;
            case 'o': oCout++; break;
            case 'u': uCout++; break;
        }
        i++;
    }

    cout << aCout << " " << eCout << " " << iCout << " " << oCout << " " << uCout<<endl;
    return 0;
}