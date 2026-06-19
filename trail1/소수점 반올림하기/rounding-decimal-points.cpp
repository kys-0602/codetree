#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    float a = 25.352f;
    std::cout.precision(1);
    std::cout << std::fixed << a;

    return 0;
}