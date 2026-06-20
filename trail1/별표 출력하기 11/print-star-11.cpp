#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 0; i < (N << 1) + 1; ++i) {
        if (i & 1) {
            for (int j = 0; j < (N << 1) + 1; ++j) {
                if (j & 1) {
                    std::cout << ' ' << ' ';
                } else {
                    std::cout << '*' << ' ';
                }
            }
        } else {
            for (int j = 0; j < (N << 1) + 1; ++j) std::cout << '*' << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}