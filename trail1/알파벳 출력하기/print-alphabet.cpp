#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    char ch = 'A';
    for (int y = 0; y < N; ++y) {
        for (int j = 0; j < y + 1; ++j) {
            std::cout << ch++;
            if (ch > 'Z') ch = 'A';
        }
        std::cout << '\n';
    }
    
    return 0;
}