#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, M; std::cin >> N >> M;

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            std::cout << '*' << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}