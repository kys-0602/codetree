#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    int L = str.length();

    for (int i = 0; i <= L; ++i) {
        std::cout << str << '\n';
        std::rotate(str.begin(), str.end() - 1, str.end());
    }

    return 0;
}