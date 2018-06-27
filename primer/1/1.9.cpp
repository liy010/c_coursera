#include <iostream>

int main() {
    int n = 50, result = 0;
    while (n < 101) {
        result += n;
        ++n;
    }

    std::cout << result << std::endl;
}