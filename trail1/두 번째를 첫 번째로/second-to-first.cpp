#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    char first = str[0];
    char second = str[1];

    for (auto& ch : str) {
        if (ch == second) ch = first;
    }
    std::cout << str;

    return 0;
}