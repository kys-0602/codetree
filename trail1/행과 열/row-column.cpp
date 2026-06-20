#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B; std::cin >> A >> B;

    for (int y = 0; y < A; ++y) {
        for (int x = 0; x < B; ++x) {
            int n = y + 1;
            std::cout << n * (x + 1) << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}