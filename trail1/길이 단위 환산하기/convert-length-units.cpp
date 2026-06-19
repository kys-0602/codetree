#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    const float FT = 30.48f;

    float N; std::cin >> N;
    std::cout.precision(1);
    std::cout << std::fixed << (FT * N);

    return 0;
}