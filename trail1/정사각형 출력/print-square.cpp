#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int cnt = 1;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << cnt++ << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}