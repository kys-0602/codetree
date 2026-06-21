#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string strs[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> strs[i];
    }

    int total_length = 0;
    for (int i = 0; i < 10; ++i) {
        total_length += strs[i].length();
    }

    std::cout << total_length;

    return 0;
}