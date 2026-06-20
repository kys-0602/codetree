#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B; std::cin >> A >> B;

    for (int i = 2; i <= 8; i += 2) {
        for (int j = B; j >= A; --j) {
            std::cout << j << " * " << i << " = " << (j * i);
            if (j != A) std::cout << " / ";
        }
        std::cout << '\n';
    }
    
    return 0;
}