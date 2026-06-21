#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string str1; std::cin >> str1;
    std::string str2; std::cin >> str2;

    std::string str1_num = "";
    for (const auto& ch : str1) {
        if (ch >= '0' && ch <= '9') str1_num += ch;
    }

    std::string str2_num = "";
    for (const auto& ch : str2) {
        if (ch >= '0' && ch <= '9') str2_num += ch;
    }

    std::cout << std::stol(str1_num) + std::stol(str2_num);

    return 0;
}