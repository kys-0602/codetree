#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << (i + 1) << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}