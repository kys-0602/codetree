#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int a; std::cin >> a;

    if (!(a & 1)) a >>= 1;
    if ((a & 1)) { a += 1; a >>= 1; }

    std::cout << a;

    return 0;
}