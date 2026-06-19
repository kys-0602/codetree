#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int weight = 13;
    float ratio = 0.165f;

    std::cout.precision(6);
    std::cout << weight << " * " << std::fixed << ratio << " = " << (weight * ratio);

    return 0;
}