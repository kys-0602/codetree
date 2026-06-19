#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 5, b = 6, c = 7;
    a = b = c;
    std::cout << a << ' ' << b << ' ' << c;

    return 0;
}