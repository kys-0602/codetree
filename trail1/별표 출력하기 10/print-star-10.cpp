#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        if (i & 1) for (int j = 0; j < N - (i - 1) / 2; ++j) std::cout << '*' << ' ';
        else for (int j = 0; j < 1 + (i / 2); ++j) std::cout << '*' << ' ';
        std::cout << '\n';
    }
    
    for (int i = N - 1; i >= 0; --i) {
        if (i & 1) for (int j = 0; j < N - (i - 1) / 2; ++j) std::cout << '*' << ' ';
        else for (int j = 0; j < 1 + (i / 2); ++j) std::cout << '*' << ' ';
        std::cout << '\n';
    }

    return 0;
}