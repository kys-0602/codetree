#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    
    int sum = 0;
    for (int i = 0, x = 0; i < N; ++i) {
        std::cin >> x;
        sum += x;
    }

    std::cout.precision(1);
    std::cout << sum << ' ' << std::fixed << (sum / (float)N);
    
    return 0;
}