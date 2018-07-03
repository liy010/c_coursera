#include <iostream> 
using namespace std;

int main(int argc, char **argv) {
    string m = "";
    m = argv[1] + m + argv[2];
    cout << m << endl;
}