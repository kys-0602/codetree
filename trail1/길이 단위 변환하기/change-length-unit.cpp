#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    float ft = 30.48f;
    int mi = 160'934;

    std::cout.precision(1);
    std::cout << "9.2ft = " << std::fixed << (ft * 9.2f) << "cm\n";
    std::cout << "1.3mi = " << std::fixed << (mi * 1.3f) << "cm\n";

    return 0;
}