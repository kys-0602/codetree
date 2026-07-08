#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;
    std::vector<int> A(N, 0); for (int i = 0; i < N; ++i) std::cin >> A[i];
    std::vector<int> B(M, 0); for (int i = 0; i < M; ++i) std::cin >> B[i];

    // std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());

    int answer = 0;
    for (int i = 0; i <= N - M; ++i) {
        std::vector<int> T;
        for (int j = 0; j < M; ++j) {
            T.push_back(A[i + j]);
        }

        std::sort(T.begin(), T.end());

        int cnt = 0;
        for (int j = 0; j < M; ++j) {
            if (B[j] == T[j]) cnt += 1;
        }

        if (cnt == M) answer += 1;
    }

    std::cout << answer;

    return 0;
}