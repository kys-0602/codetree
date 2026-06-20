#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int y = 1; y <= N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << (N * y) - (y * x) << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}