#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            if (x & 1) {
                std::cout << (N - y);
            } else {
                std::cout << (y + 1);
            }
        }
        std::cout << '\n';
    }
    
    return 0;
}