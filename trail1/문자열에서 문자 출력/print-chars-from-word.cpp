#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    for (const auto& ch : str) std::cout << ch << '\n';

    return 0;
}