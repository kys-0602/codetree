#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    for (int i = 5; i <= 17; i += 2) {
        std::cout << i << ' ';
    }   

    return 0;
}