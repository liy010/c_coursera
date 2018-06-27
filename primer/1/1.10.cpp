#include <iostream>

int main() {
    int n = 10, result = 0;
    while (n > 0) {
        result += n;
        n--;
    }
    std::cout << result << std::endl;
}