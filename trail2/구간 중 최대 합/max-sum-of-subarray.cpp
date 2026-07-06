#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K; std::cin >> N >> K;
    std::vector<int> vec(N, 0); for (int i = 0; i < N; ++i) std::cin >> vec[i];

    int max = -1;

    for (int i = 0; i <= N - K; ++i) {
        int sum = 0;
        for (int j = 0; j < K; ++j) {
            sum += vec[i + j];
        }

        if (sum > max) max = sum;
    }

    std::cout << max;

    return 0;
}