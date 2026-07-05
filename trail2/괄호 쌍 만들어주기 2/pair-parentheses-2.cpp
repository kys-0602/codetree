#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    int length = str.length();
    int answer = 0;
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 2; j < length - 1; ++j) {
            if (str[i] == '(' && str[i + 1] == '(' && str[j] == ')' && str[j + 1] == ')') {
                answer += 1;
            }
        }
    }

    std::cout << answer;

    return 0;
}