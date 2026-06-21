#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string strs[3];
    for (int i = 0; i < 3; ++i) std::cin >> strs[i];

    int max = strs[0].length();
    int min = strs[0].length();
    for (int i = 1; i < 3; ++i) {
        if (max < strs[i].length()) max = strs[i].length();
        if (min > strs[i].length()) min = strs[i].length();
    }

    std::cout << max - min;

    return 0;
}