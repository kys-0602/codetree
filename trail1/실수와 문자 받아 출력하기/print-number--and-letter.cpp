#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char c;
    double a, b;
    std::cin >> c >> a >> b;

    std::cout << c << '\n';
    std::cout.precision(2);
    std::cout << std::fixed << a << '\n' << b;

    return 0;
}