#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 1, b = 5, c = 3;
    a = c;
    a += c;
    b -= c;

    std::cout << a << '\n' << b << '\n' << c;

    return 0;
}