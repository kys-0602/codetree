#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    while (str.length() > 1) {
        int x; std::cin >> x;
        if (x >= str.length()) str.erase(str.begin() + (str.length() - 1));
        else str.erase(str.begin() + x);

        std::cout << str << '\n';
    }

    return 0;
}