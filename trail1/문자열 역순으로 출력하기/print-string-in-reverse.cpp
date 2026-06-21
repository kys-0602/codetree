#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string strs[4];
    for (int i = 0; i < 4; ++i) std::cin >> strs[i];

    for (int i = 3; i >= 0; --i) std::cout << strs[i] << '\n';

    return 0;
}