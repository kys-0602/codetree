#include <iostream>

constexpr auto MAX_SIZE = 100;

int gArr[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        std::cin >> gArr[n];
    }

    int answer = 0;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int A = gArr[i];
                int B = gArr[j];
                int C = gArr[k];

                if (A <= B && B <= C) {
                    answer += 1;
                }
            }
        }
    }

    std::cout << answer;

    return 0;
}