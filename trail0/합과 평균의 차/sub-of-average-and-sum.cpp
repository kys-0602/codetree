#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;

    int sum = a + b + c;
    int avg = sum / 3;
    std::cout << sum << '\n';
    std::cout << avg << '\n';
    std::cout << (sum - avg);

    return 0;
}