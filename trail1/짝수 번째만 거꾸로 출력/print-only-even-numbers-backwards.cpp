#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    for (int i = str.length(); i > 0; --i) {
        if (!(i & 1)) std::cout << str[i - 1];
    }

    return 0;
}