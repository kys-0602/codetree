#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = N - i - 1; j > 0; --j) std::cout << ' ';
        for (int j = 0; j < (2 * (i + 1)) - 1; ++j) std::cout << '*';
        std::cout << '\n';
    }

    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < i + 1; ++j) std::cout << ' ';
        for (int j = (N * 2) - (i * 2) - 3; j > 0; --j) std::cout << '*';
        std::cout << '\n';
    }
    
    return 0;
}