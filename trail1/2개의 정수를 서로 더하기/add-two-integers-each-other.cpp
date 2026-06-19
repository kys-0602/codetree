#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int a, b; std::cin >> a >> b;
    a += b;
    b += a;
    std::cout << a << ' ' << b;

    return 0;
}