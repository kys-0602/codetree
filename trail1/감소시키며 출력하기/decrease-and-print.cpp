#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    for (int i = 17; i >= 5; --i) {
        std::cout << i << ' ';
    }

    return 0;
}