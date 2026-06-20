#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    
    for (int n = 1; n <= N; ++n) {
        for (int i = 0; i < N; ++i) std::cout << n;
        std::cout << '\n';
    }
    
    return 0;
}