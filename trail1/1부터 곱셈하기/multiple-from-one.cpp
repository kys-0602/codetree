#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 1, prod = 1; i <= 10; ++i) {
        prod *= i;
        if (prod >= N) {
            std::cout << i;
            break;
        }
    }
    
    return 0;
}