#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int input = 0;
    while (true) {
        std::cin >> input;
        if (input == 0) break;
        std::cout << input << '\n';
    }

    return 0;
}