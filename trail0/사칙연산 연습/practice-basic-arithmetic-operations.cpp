#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 5, b = 30;
    int c = a + b;

    std::cout << (c >> 3) << '\n' << (c % 8);

    return 0;
}