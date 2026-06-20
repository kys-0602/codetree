#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    for (int i = N; i >= 1; --i) {
        for (int j = N - i; j > 0; --j) std::cout << ' ' << ' ';
        for (int j = 0; j < i; ++j) std::cout << (i - j) << ' ';
        std::cout << '\n';
    }   
    
    return 0;
}