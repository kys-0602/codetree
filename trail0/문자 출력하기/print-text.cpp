#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char ch; std::cin >> ch;

    // for (int i = 0; i < 8; ++i) std::cout << ch;
    std::cout << std::string(8, ch);

    return 0;
}