#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str1, str2;
    std::cin >> str1 >> str2;

    int length1 = str1.length();
    int length2 = str2.length();

    if (length1 > length2) {
        std::cout << str1 << ' ' << length1;
    } else if (length2 > length1) {
        std::cout << str2 << ' ' << length2;
    } else {
        std::cout << "same";
    }

    return 0;
}