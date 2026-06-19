#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string fruits[] = { "apple", "banana", "grape", "blueberry", "orange" };
    char ch; std::cin >> ch;

    int cnt = 0;
    for (int i = 0; i < 5; ++i) {
        if (fruits[i][2] == ch || fruits[i][3] == ch) {
            cnt += 1;
            std::cout << fruits[i] << '\n';
        }
    }
    std::cout << cnt;

    return 0;
}