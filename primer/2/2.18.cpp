#include <iostream>

int main() {
    int val = 1024;
    int *p = &val;
    std::cout << *p << std::endl;
    std::cout << p << std::endl;
    int xx = 9;
    *p = xx;
    int yy = 10;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    int *ip = &yy;

    std::cout << ip << std::endl;
    std::cout << *ip << std::endl;
    *ip = 0;
    std::cout << ip <<std::endl;
    std::cout << *ip << std::endl;
    std::cout << yy << std::endl;
    int zero = 0;
    pi = zero;

    std::cout << "-----------------------------------------" << std::endl;

    int we = 90;
    int &wel = we;
    std::cout << wel << std::endl;
    wel = 70;
    std::cout << wel << std::endl;
    std::cout << we << std::endl;
    int qwer = 80;
    wel = qwer;
    std::cout << wel << std::endl;
    std::cout << we << std::endl;
    return 0;
}