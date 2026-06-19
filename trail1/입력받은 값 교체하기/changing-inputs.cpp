#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b; std::cin >> a >> b;

    int c = a;
    a = b;
    b = c;

    std::cout << a << ' ' << b;

    return 0;
}