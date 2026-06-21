#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string strs[10];
    for (int i = 0; i < 10; ++i) std::cin >> strs[i];

    char ch; std::cin >> ch;

    bool flag = false;
    for (const auto& str : strs) {
        if (str[str.length() - 1] == ch) {
            std::cout << str << '\n';
            flag = true;
        }
    }

    if (flag == false) {
        std::cout << "None";
    }

    return 0;
}