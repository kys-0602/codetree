#include <iostream>
#include <vector>

constexpr auto MAX_POS = 100 + 1;

int gArr[MAX_POS];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K; std::cin >> N >> K;
    for (int n = 0; n < N; ++n) {
        int cnt, pos; std::cin >> cnt >> pos;

        gArr[pos] += cnt;
    }
    
    int max = -1;
    for (int c = 0; c < MAX_POS; ++c) {
        int cnt = 0;
        for (int i = std::max(0, c - K); i <= std::min(MAX_POS, c + K); ++i) {
            cnt += gArr[i];
        }

        if (cnt > max) max = cnt;
    }

    std::cout << max;

    return 0;
}