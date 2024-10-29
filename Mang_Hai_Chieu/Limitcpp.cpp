#include <iostream>
#include <limits>

int main() {
    int int_max = std::numeric_limits<int>::max();
    int int_min = std::numeric_limits<int>::min();

    std::cout << "Can tren cua kieu so nguyen: " << int_max << std::endl;
    std::cout << "Can duoi cua kieu so nguyen: " << int_min << std::endl;

    return 0;
}
