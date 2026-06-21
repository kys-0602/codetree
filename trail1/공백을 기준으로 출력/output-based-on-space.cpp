#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    for (const auto& ch : str1) {
        if (ch != ' ') std::cout << ch;
    }
    for (const auto& ch : str2) {
        if (ch != ' ') std::cout << ch;
    }

    return 0;
}