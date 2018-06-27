#include <iostream>

int main() {
    int a=0, result=0;
    while (std::cin >> a) {
        result += a;
    }
    std::cout << result <<std::endl; 
    return 0;
}