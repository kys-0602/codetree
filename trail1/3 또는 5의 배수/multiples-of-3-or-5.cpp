#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A; std::cin >> A;
    
    std::cout << (A % 3 == 0 ? "YES" : "NO") << '\n';
    std::cout << (A % 5 == 0 ? "YES" : "NO");

    return 0;
}