#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int start_odd = 11;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << start_odd + (x * 2) << ' ';
        }
        std::cout << '\n';
        start_odd += 2;
    }
    
    return 0;
}