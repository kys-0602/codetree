#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 2;
    int b = 6;
    a = b;
    std::cout << a << '\n' << b;

    return 0;
}