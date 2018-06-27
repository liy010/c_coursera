#include <iostream>

int main() {
    int m, n;
    std::cout << "输入两个整数：";
    std::cin >> m >> n;
    while (m > n + 1) {
        std::cout << n + 1<<std::endl;
        n++;
    }
    while (n > m + 1) {
        std::cout << m + 1 <<std::endl;
        m++;
    }
}
