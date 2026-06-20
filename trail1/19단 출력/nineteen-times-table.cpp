#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    for (int i = 1; i <= 19; ++i) {
        for (int j = 1; j <= 19; ++j) {
            std::cout << i << " * " << j << " = " << (i * j);

            if (j % 2 != 0 && j % 19 != 0) std::cout << " / ";
            if (j == 19 || j % 2 == 0) std::cout << '\n';
        }
    }
    
    return 0;
}