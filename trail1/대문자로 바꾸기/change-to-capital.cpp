#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char strs[5][3]{ '\0' };
    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 3; ++x) {
            std::cin >> strs[y][x];
            std::getchar();
        }
    }

    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 3; ++x) {
            std::cout << (char)(strs[y][x] ^ 0x20) << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}