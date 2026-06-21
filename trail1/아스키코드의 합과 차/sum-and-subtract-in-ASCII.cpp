#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char ch1, ch2;
    std::cin >> ch1;
    std::getchar();
    std::cin >> ch2;

    int sum = ch1 + ch2;
    int sub = std::abs(ch1 - ch2);
    std::cout << sum << ' ' << sub;

    return 0;
}