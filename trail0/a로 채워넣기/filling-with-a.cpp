#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str; std::cin >> str;

    str[1] = str[str.length() - 2] = 'a';
    std::cout << str;

    return 0;
}