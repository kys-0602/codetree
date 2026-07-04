#include <iostream>

constexpr auto MAX_SIZE = 100;

int gARR[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        std::cin >> gARR[n];
    }

    int answer = 1'000'000'000;
    for (int i = 1; i <= N; ++i) {
        int dist_sum = 0;
        for (int j = 1; j <= N; ++j) {
            int x = gARR[j - 1];
            int dist = std::abs(i - j);

            dist_sum += (x * dist);
        }

        if (answer > dist_sum) answer = dist_sum;
    }

    std::cout << answer;

    return 0;
}