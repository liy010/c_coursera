#include "Chapter6.h"

int fact(int m) {
    int result = 1;
    while (m > 0) {
        result *= m--;
    }
    return result;
}

int ff(int n) {
    if (n > 0)
        return n;
    else 
        return -n;
}
