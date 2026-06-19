#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int sum = 0;
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 4; ++x) {
            int input; std::cin >> input;
            if (x < y + 1) {
                sum += input;
            }
        }
    }
    std::cout << sum;

    return 0;
}