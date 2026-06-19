#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int a; std::cin >> a;
    std::cout << ((a < 10 || a > 20) ? "yes" : "no");

    return 0;
}