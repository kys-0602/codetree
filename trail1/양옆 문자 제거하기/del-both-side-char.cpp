#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        if (i == 1 || i == str.length() - 2) continue;
        std::cout << str[i];
    }

    return 0;
}