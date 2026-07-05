#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    char* str = new char[N + 1];
    std::cin >> str;

    int answer = 0;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if (str[i] == 'C' && str[j] == 'O' && str[k] == 'W') {
                    answer += 1;
                }
            }
        }
    }

    std::cout << answer;

    delete[] str;
    str = nullptr;

    return 0;
}