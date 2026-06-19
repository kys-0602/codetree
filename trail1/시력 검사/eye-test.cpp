#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    float a, b; std::cin >> a >> b;

    if (a >= 1.0f && b >= 1.0f) std::cout << "High";
    else if (a >= 0.5f && b >= 0.5f) std::cout << "Middle";
    else std::cout << "Low";

    return 0;
}