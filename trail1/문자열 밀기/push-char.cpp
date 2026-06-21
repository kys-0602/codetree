#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    std::rotate(str.begin(), str.begin() + 1, str.end());
    std::cout << str;

    return 0;
}