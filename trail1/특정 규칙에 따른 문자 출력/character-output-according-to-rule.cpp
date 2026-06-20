#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int l = 0; l < N; ++l) {
        for (int i = 0; i < N - l - 1; ++i) std::cout << ' ' << ' ';
        for (int i = 0; i < l + 1; ++i) std::cout << '@' << ' ';
        std::cout << '\n';
    }
    
    for (int l = 0; l < N - 1; ++l) {
        for (int i = N - 1 - l; i > 0; --i) std::cout << '@' << ' ';
        std::cout << '\n';
    }
    
    return 0;
}