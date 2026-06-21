#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::string strs[20];
    for (int i = 0; i < N; ++i) std::cin >> strs[i];
    char ch; std::cin >> ch;

    int total_length = 0;
    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (strs[i][0] == ch) {
            total_length += strs[i].length();
            cnt += 1;
        }
    }

    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << cnt << ' ' << (total_length / (float)cnt);

    return 0;
}