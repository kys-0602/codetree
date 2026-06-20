#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int n = N; n > 0; --n) {
        for (int j = N; j > 0; --j) {
            std::cout << '(' << n << ',' << j << ')' << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}