#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    for (int i = 0; i < 4; ++i) {
        int sum = 0;
        for (int j = 0, x = 0; j < 4; ++j) {
            std::cin >> x;
            sum += x;
        }
        std::cout << sum << '\n';
    }

    return 0;
}