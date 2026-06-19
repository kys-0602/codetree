#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 3;
    int b = 5;

    int c = b;
    b = a;
    a = c;
    std::cout << a << '\n' << b;

    return 0;
}