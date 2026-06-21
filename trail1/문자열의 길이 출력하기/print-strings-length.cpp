#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1, str2;
    std::cin >> str1 >> str2;

    std::cout << (str1.length() + str2.length());

    return 0;
}