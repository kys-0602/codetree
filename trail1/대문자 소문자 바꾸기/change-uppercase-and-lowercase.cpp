#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string str; std::cin >> str;
    for (auto& ch : str) {
        ch ^= 0x20;
    }
    std::cout << str;

    return 0;
}