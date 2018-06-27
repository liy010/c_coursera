#include <iostream>

int main() {
    int m, n;
    std::cout << "输入两个整数" << std::endl;
    std::cin >> m >> n;
    for (n; m > n + 1; n++) {
        std::cout << n + 1 << std::endl;
    }
    for (m; n > m + 1; m++) {
        std::cout << m + 1 << std::endl;
    }
}