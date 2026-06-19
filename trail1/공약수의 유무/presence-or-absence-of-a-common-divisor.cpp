#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B; std::cin >> A >> B;

    for (; A <= B; ++A) {
        if (1920 % A == 0 && 2880 % A == 0) {
            std::cout << 1;
            return 0;
        }
    }
    std::cout << 0;    
    
    return 0;
}