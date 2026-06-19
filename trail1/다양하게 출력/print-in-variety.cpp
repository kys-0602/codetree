#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cout << "Total days in Year\n";
    std::cout << 365 << '\n';
    std::cout << "Circumference rate\n";
    std::cout.precision(10);
    std::cout << std::fixed << 3.1415926535;

    return 0;
}