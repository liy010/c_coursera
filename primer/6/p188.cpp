#include <iostream>
using namespace std;

void reset(int *ip) {
    *ip = 0;
    //ip = 0;
}

int main() {
    int i = 0;
    reset (&i);
    cout << "i = " << i << endl;
    return 0;
}