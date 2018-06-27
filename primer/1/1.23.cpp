#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    if (std::cin >> item1) {
        int n = 1;
        while (std::cin >> item2) {
            if (item1.isbn == item2.isbn)
                ++n;
            else {                
                std::cout << item1.isbn << " " << n << std::endl;
                item1 = item2;
                n = 1;
            }
            
        }
        std::cout << item1.isbn << " " << n << std::endl;

    }
    return 0;
}