#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B; std::cin >> A >> B;

    std::cout << (A + B) << '\n';
    std::cout << (A - B) << '\n';
    std::cout << (A / B) << '\n';
    std::cout << (A % B);

    return 0;
}