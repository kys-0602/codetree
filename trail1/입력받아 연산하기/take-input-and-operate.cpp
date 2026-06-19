#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int a, b; std::cin >> a >> b;
    a += 87, b %= 10;
    std::cout << a << '\n' << b;

    return 0;
}