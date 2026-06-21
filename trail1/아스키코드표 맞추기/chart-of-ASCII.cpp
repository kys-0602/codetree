#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int i = 0, x = 0; i < 5; ++i) {
        std::cin >> x;

        std::cout << (char)x << ' ';
    }

    return 0;
}