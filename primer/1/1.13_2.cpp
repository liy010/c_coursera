#include <iostream>

int main() {
    int result;
    for (int i = 10; i > 0; i--) {
        result += i;
    }
    std::cout << result << std::endl;
}