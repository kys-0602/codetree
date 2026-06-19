#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int a; std::cin >> a;

    if (a == 5) std::cout << 'A';
    else if (a % 2 == 0) std::cout << 'B';

    return 0;
}