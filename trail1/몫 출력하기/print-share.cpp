#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int input;
    int cnt = 0;
    while (std::cin >> input) {
        if (!(input & 1)) {
            std::cout << (input >> 1) << '\n';
            cnt += 1;
        }

        if (cnt == 3) break;
    }
    
    return 0;
}