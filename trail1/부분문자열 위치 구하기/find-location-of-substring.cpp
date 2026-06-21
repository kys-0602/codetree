#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1, str2;
    std::cin >> str1 >> str2;

    for (int i = 0; i <= str1.length() - str2.length(); ++i) {
        int cnt = 0;
        for (int j = 0; j < str2.length(); ++j) {
            if (str1[i + j] == str2[j]) {
                cnt += 1;
            }
        }

        if (cnt == str2.length()) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << -1;

    return 0;
}