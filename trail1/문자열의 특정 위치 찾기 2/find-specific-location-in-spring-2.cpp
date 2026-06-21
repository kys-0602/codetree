#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string strs[5] = { "apple", "banana", "grape", "blueberry", "orange" };

    int cnt = 0;
    char ch; std::cin >> ch;
    for (const auto& str : strs) {
        if (str[2] == ch || str[3] == ch) {
            std::cout << str << '\n';
            cnt += 1;
        }
    }
    std::cout << cnt;

    return 0;
}