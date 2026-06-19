#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int start = 10, end = 26;

    while (start <= end) {
        std::cout << start << ' ';
        start += 2;
    }

    return 0;
}