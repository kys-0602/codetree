#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    for (int i = 0, x = 0; i < 5; ++i) {
        std::cin >> x;

        if (x % 3 != 0) {
            std::cout << 0;
            return 0;
        }
    }
    std::cout << 1;
    
    return 0;
}