#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    int ee_cnt = 0;
    int eb_cnt = 0;

    for (int i = 1; i < str.length(); ++i) {
        if (str[i - 1] == 'e' && str[i] == 'e') ee_cnt += 1;
        if (str[i - 1] == 'e' && str[i] == 'b') eb_cnt += 1;
    }

    std::cout << ee_cnt << ' ' << eb_cnt;

    return 0;
}