#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a; std::cin >> a;
    a <<= 1;
    std::cout << a;

    return 0;
}