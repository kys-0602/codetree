#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string str;
    while (std::cin >> str) {
        if (str == "END") break;

        for (int i = str.length() - 1; i >= 0; --i) std::cout << str[i];
        std::cout << '\n';
    }

    return 0;
}