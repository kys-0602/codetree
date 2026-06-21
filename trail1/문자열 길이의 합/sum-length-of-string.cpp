#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;

    int total_length = 0, a_cnt = 0;
    for (int n = 0; n < N; ++n) {
        std::string str; std::cin >> str;
        total_length += str.length();
        if (str[0] == 'a') a_cnt += 1;
    }

    std::cout << total_length << ' ' << a_cnt;

    return 0;
}