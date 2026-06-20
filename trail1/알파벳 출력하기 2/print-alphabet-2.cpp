#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    char ch = 'A';
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < y; ++x) std::cout << ' ' << ' ';
        for (int x = 0; x < (N - y); ++x) {
            std::cout << ch++ << ' ';
            if (ch > 'Z') ch = 'A';
        }
        std::cout << '\n';
    }
    
    return 0;
}