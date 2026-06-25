#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1, str2;
    std::cin >> str1 >> str2;

    if (str1.length() != str2.length()) {
        std::cout << "No";
    } else {
        std::sort(str1.begin(), str1.end());
        std::sort(str2.begin(), str2.end());

        std::cout << (str1 == str2 ? "Yes": "No");
    }

    return 0;
}