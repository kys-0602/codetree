#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            std::cout << '(' << i << ", " << j << ')' << ' ';
            if ((i + j) % 4 == 0) std::cout << '\n';
        }
    }
    
    return 0;
}