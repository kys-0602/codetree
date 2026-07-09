#include <iostream>

constexpr auto MAX_SIZE = 6;

int gArr[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int i = 0; i < MAX_SIZE; ++i) std::cin >> gArr[i];

    int answer = 1'000'000'000;
    for (int i = 0; i < MAX_SIZE - 2; ++i) {
        for (int j = i + 1; j < MAX_SIZE - 1; ++j) {
            for (int k = j + 1; k < MAX_SIZE; ++k) {
                // 전체 합
                int total_sum = 0;
                for (int l = 0; l < MAX_SIZE; ++l) total_sum += gArr[l];

                // 부분 합 1
                int sum1 = gArr[i] + gArr[j] + gArr[k];

                // 부분 합 2
                int sum2 = total_sum - sum1;

                // 차이
                int diff = std::abs(sum1 - sum2);

                // 차이가 작은 순
                if (diff < answer) answer = diff;
            }
        }
    }

    std::cout << answer;

    return 0;
}