#include <iostream>
using namespace std;

int main() {
    //a="洞庭湖" b = "洪泽湖" c = "鄱阳湖" d = "太湖"
    for (int a = 1; a < 5; a++) {
        for (int b = 1; b < 5; b++) {
            if (b == a)
                continue;
            for (int c = 1; c < 5; c++) {
                if (c == a || c == b) 
                    continue;
                for (int d = 1; d < 5; d++) {
                    if (d == a || d == b || d == c)
                        continue;
                    if ((a == 1 || b == 4 || c == 3) && (b == 1 || a == 4 || c == 2 || d == 3)
                        && (b == 4 || a == 3) && (c == 1 || d == 4 || b == 2 || a == 3)) {
                        if (!((a == 1 && b == 4 && c == 3) || 
                        (b == 1 && a == 4 && c == 2 && d == 3) ||
                        (b == 4 && a == 3) || 
                        (c == 1 && d == 4 && b == 2 && a == 3))) {
                            cout << c << endl;
                            cout << a << endl;
                            cout << d << endl;
                            cout << b << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}