#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int start = 26, end = 10;
    while (start >= end) {
        std::cout << start-- << ' ';
    }
    
    return 0;
}