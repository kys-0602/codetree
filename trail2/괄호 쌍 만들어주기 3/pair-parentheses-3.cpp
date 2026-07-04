#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;

    int answer = 0;
    int length = str.length();
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (str[i] == '(' && str[j] == ')') {
                answer += 1;
            }
        }
    }

    std::cout << answer;

    return 0;
}