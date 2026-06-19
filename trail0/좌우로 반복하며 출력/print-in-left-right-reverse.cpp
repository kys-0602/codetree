#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (int y = 0; y < N; ++y) {
        if (y % 2 == 0) {
            for (int x = 0; x < N; ++x) {
                std::cout << (x + 1);
            }
        } else {
            for (int x = N; x > 0; --x) {
                std::cout << x;
            }
        }

        std::cout << '\n';
    }

    return 0;
}