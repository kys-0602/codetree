#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int h, w; std::cin >> h >> w;
    int b = (10'000 * w) / (float)(h * h);
    std::cout << b;
    if (b >= 25) std::cout << "\nObesity";

    return 0;
}