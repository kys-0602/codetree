#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 1, b = 2, c = 3;
    int s = a + b + c;
    a = b = c = s;

    std::cout << a << ' ' << b << ' ' << c;

    return 0;
}