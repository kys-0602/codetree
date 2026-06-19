#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n; std::cin >> n;

    while (n >= 1) {
        std::cout << n-- << ' ';
    }
    
    return 0;
}