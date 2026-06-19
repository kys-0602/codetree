#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    float N; std::cin >> N;

    std::cout.precision(2);
    std::cout << std::fixed << N;

    return 0;
}