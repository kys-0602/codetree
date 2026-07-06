#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, S; std::cin >> N >> S;
    std::vector<int> vec(N, 0); for (int i = 0; i < N; ++i) std::cin >> vec[i];

    int answer = 1'000'000'000;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int T = 0;
            for (int k = 0; k < N; ++k) {
                if (k == i || k == j) continue;
                T += vec[k];
            }

            int abs = std::abs(T - S);
            if (abs < answer) answer = abs;        
        }
    }

    std::cout << answer;

    return 0;
}