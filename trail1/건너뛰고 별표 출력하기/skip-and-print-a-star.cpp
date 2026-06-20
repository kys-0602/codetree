#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i + 1; ++j) std::cout << '*';
        std::cout << '\n' << '\n';
    }

    for (int i = N - 1; i > 0; --i) {
        for (int j = i; j > 0; --j) std::cout << '*';
        std::cout << '\n' << '\n';
    }
    
    return 0;
}