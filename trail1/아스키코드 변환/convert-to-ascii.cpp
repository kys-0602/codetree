#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char a; std::cin >> a;
    std::getchar();
    int b; std::cin >> b;

    std::cout << (int)a << ' ' << (char)b;

    return 0;
}