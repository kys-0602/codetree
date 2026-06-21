#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::getline(std::cin, str);
    char ch; std::cin >> ch;

    int cnt = 0;
    for (const auto& c : str) {
        if (c == ch) cnt += 1; 
    }

    std::cout << cnt;

    return 0;
}