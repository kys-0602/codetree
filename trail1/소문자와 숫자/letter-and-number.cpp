#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string str; std::cin >> str;
    for (auto& ch : str) {
        if (ch >= 'A' && ch <= 'Z') ch ^= 0x20;
    }

    for (const auto& ch : str) {
        if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z')) std::cout << ch;
    }

    return 0;
}