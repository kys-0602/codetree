#include <iostream>

constexpr auto MAX_SIZE = 100;

int gArr[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) std::cin >> gArr[i];

    int answer = -1'000'000'000;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 2; j < N; ++j) {
            int sum = gArr[i] + gArr[j];
            if (sum > answer) answer = sum;
        }
    }

    std::cout << answer;

    return 0;
}