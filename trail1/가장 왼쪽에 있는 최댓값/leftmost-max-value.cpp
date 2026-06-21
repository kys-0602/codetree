#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int ARR[1000]{ 0 };
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        std::cin >> ARR[i];
    }

    int max = ARR[0];
    int max_idx = 0;

    // 최종 최댓값
    for (int i = 0; i < 1000; ++i) {
        if (ARR[i] > max) {
            max = ARR[i];
            max_idx = i;
        }
    }

    std::cout << max_idx + 1 << ' ';

    // 여러 개 있다면
    while (max_idx > 0) {
        max = ARR[0];
        int max_idx2 = 0;
        for (int i = 0; i < max_idx; ++i) {
            if (ARR[i] > max) {
                max = ARR[i];
                max_idx2 = i;
            }
        }

        std::cout << max_idx2 + 1 << ' ';
        max_idx = max_idx2;
    }

    return 0;
}