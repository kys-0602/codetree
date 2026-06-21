#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    int Q; std::cin >> Q;
    for (int q = 0; q < Q; ++q) {
        int type; std::cin >> type;

        if (type == 1) {
            std::rotate(str.begin(), str.begin() + 1, str.end());
        } else if (type == 2) {
            std::rotate(str.begin(), str.end() - 1, str.end());
        } else if (type == 3) {
            std::reverse(str.begin(), str.end());
        }
        std::cout << str << '\n';
    }

    return 0;
}