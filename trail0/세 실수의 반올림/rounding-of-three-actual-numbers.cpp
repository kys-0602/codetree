#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    float a, b, c;
    std::cin >> a >> b >> c;

    std::cout.precision(3);
    std::cout << std::fixed << a << '\n' << b << '\n' << c;

    return 0;
}