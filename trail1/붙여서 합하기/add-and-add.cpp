#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string A, B; std::cin >> A >> B;
    std::string AB = A + B;
    std::string BA = B + A;

    std::cout << std::stol(AB) + std::stol(BA);

    return 0;
}