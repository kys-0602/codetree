#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, H, T; std::cin >> N >> H >> T;
    std::vector<int> vec(N, 0); for (int i = 0; i < N; ++i) std::cin >> vec[i];

    // T번 보면 되니까..?
    int answer = 1'000'000'000;
    for (int i = 0; i <= N - T; ++i) {
        // T 구간이 H인지
        int c = 0;
        for (int j = i; j < i + T; ++j) {
            c += std::abs(vec[j] - H);
        }

        if (c < answer) answer = c;
    }

    std::cout << answer;

    return 0;
}