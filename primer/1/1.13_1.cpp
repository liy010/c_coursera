#include <iostream>
 
int main() {
    int result = 0;
    for (int i = 50; i < 101; i++) {
        result += i;
    }
    std::cout << result << std::endl;
}