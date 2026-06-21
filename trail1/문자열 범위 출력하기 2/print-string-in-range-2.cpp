#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::cin >> str;
    int N; std::cin >> N;

    if (N > str.length()) {
        for (int i = str.length() - 1; i >= 0; --i) std::cout << str[i];
    } else {
        for (int i = 0; i < N; ++i) {
            std::cout << str[str.length() - i - 1];
        }
    }

    return 0;
}