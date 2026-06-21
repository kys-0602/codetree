#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::vector<std::string> strs;

    while (true) {
        std::string str; std::cin >> str;
        if (str == "0") break;

        strs.push_back(str);
    }

    std::cout << strs.size() << '\n';
    for (int i = 1; i <= strs.size(); ++i) {
        if ((i & 1)) {
            std::cout << strs[i - 1] << '\n';
        }
    }

    return 0;
}