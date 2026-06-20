#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    float sum = 0.0f;
    for (int i = 0; i < 8; ++i) {
        float x; std::cin >> x;

        sum += x;
    }

    std::cout.precision(1);
    std::cout << std::fixed << (sum / 8);
    
    return 0;
}