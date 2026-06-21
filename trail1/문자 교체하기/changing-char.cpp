#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1, str2;
    std::cin >> str1 >> str2;

    str2[0] = str1[0];
    str2[1] = str1[1];
    std::cout << str2;

    return 0;
}