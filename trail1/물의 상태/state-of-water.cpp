#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int n; std::cin >> n;

    if (n < 0) std::cout << "ice";
    else if (n >= 100) std::cout << "vapor";
    else std::cout << "water";

    return 0;
}