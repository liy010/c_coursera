#include <iostream>
using namespace std;

//-- 5.25
// int main() {
//     int a, b, m;
//     while(cin >> a >> b) {
//         try {
//             if (b == 0) {
//                 throw runtime_error("b 不能为0");
//             } else 
//                 cout << a/b << endl;
//         } catch (runtime_error err) {
//             cout << err.what()
//                  << "\nTry again? enter y or n" << endl;
//             char c;
//             cin >> c;
//             if (!cin || c == 'n')
//                 break;
//         }
//     }
//     return 0;
// }


//-- 5.24
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << a/b << endl;
//     return 0;
// }