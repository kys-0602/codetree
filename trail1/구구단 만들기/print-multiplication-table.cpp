#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B; std::cin >> A >> B;

    for (int i = 1; i <= 9; ++i) {
        for (int j = B; j >= A; j -= 2) {
            std::cout << j << " * " << i << " = " << (j * i);
            if (j != A) std::cout << " / ";
        }
        // for (int j = 0; j < (B / A); ++j) {
        //     std::cout << (B - (A * j)) << " * " << i << " = " << ((B - (A * j)) * i);
        //     if (j < ((B / A) - 1)) std::cout << " / ";
        // }
        std::cout << '\n';
    }
    
    return 0;
}