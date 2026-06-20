#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 1; j <= i + 1; ++j) std::cout << j << ' ';
        std::cout << '\n';
    }
    
    return 0;
}