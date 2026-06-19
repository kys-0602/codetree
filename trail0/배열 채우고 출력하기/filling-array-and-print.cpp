#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char strs[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> strs[i];

        std::getchar();
    }

    for (int i = 9; i >= 0; --i) {
        std::cout << strs[i];
    }

    return 0;
}