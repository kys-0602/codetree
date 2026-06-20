#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= (N - i + 1); ++j) {
            std::cout << i << " * " << j << " = " << (i * j);

            if (j <= (N - i)) std::cout << " / ";
        }
        std::cout << '\n';
    }
    
    return 0;
}