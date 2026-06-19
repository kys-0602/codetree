#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    float a = 5.26f;
    float b = 8.27f;

    std::cout.precision(3);
    std::cout << std::fixed << (a * b);

    return 0;
}