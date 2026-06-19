#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int ARR[10];
    std::cin >> ARR[0] >> ARR[1];

    std::cout << ARR[0] << ' ' << ARR[1] << ' ';
    for (int i = 2; i < 10; ++i) {
        ARR[i] = (ARR[i - 2] + ARR[i - 1]) % 10;
        std::cout << ARR[i] << ' ';
    }

    return 0;
}