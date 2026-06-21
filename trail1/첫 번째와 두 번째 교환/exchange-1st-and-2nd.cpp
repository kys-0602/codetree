#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    char first = str[0];
    char second = str[1];
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == first) str[i] = second;
        else if (str[i] == second) str[i] = first;
    }

    std::cout << str;

    return 0;
}