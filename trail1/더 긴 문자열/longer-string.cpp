#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1, str2;
    std::cin >> str1 >> str2;

    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 > len2) std::cout << str1 << ' ' << len1;
    else if (len1 < len2) std::cout << str2 << ' ' << len2;
    else std::cout << "same";

    return 0;
}