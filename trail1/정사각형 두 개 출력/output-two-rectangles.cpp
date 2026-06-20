#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int l = 0; l < 2; ++l) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) std::cout << '*';
            std::cout << '\n';
        }

        std::cout << '\n';
    }
    
    return 0;
}