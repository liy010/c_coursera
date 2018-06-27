#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item, item2;
    std::cin >> item;
    while (std::cin >> item2) {
        item += item2;
    }
    std::cout << item << std::endl;
}