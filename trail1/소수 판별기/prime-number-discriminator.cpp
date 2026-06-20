#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    for (int i = 2; i*i <= N; ++i) {
        if (N % i == 0) {
            std::cout << 'C';
            return 0;
        }
    }
    std::cout << 'P';
    
    return 0;
}