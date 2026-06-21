#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    for (auto& ch : str) {
        if (ch >= 'a' && ch <= 'z') ch ^= 0x20;
    }
    for (const auto& ch : str) {
        if (ch >= 'A' && ch <= 'Z') std::cout << ch;
    }

    return 0;
}