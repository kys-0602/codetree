#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<std::string> strs(n, "");
    for (int i = 0; i < n; ++i) {
        std::string str; std::cin >> str;
        strs[i] = str;
    }

    std::sort(strs.begin(), strs.end());
    for (const auto& str : strs) {
        std::cout << str << '\n';
    }

    return 0;
}