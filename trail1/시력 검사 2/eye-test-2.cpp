#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    float a; std::cin >> a;

    if (a >= 1.0f) std::cout << "High";
    else if (a >= 0.5f) std::cout << "Middle";
    else std::cout << "Low";

    return 0;
}