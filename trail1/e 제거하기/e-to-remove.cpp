#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    std::size_t pos = str.find('e');
    str.erase(str.begin() + pos);
    std::cout << str;

    return 0;
}