#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;

    std::cout.precision(1);
    std::cout << (A + B) << ' ' << std::fixed << ((A + B) / 2.0f);

    return 0;
}