#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 3;
    int b = 4;
    b = a;
    std::cout << a << ' ' << b << '\n';
    std::cout << a * b;

    return 0;
}