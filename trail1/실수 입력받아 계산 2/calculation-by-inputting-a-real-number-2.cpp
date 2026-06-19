#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    float a; std::cin >> a;
    a += 1.5f;

    std::cout.precision(2);
    std::cout << std::fixed << a;

    return 0;
}