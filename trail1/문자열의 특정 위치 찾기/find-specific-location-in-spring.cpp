#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    char ch; std::cin >> ch;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            std::cout << i;
            return 0;
        }
    }

    std::cout << "No";

    return 0;
}