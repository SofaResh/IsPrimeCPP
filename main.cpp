#include <iostream>
#include "IsPrime.h"

int main() {
    if (IsPrime::isPrime(2)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}
