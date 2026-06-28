#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;

    std::vector<int> A;
    for (int i = 0; i < N; ++i) {
        int v, t; std::cin >> v >> t;
        
        for (int j = 0; j < t; ++j) A.push_back(v);
    }

    std::vector<int> B;
    for (int i = 0; i < M; ++i) {
        int v, t; std::cin >> v >> t;

        for (int j = 0; j < t; ++j) B.push_back(v);
    }

    int answer = 0;
    int score = -1; // 아직 초기 상태 없음

    int a_move = 0, b_move = 0;

    for (int time = 0; time < A.size(); ++time) {
        a_move += A[time];
        b_move += B[time];

        int current_score = 0; // 0: 공동 선두, 1: A, 2: B

        if (a_move > b_move) {
            current_score = 1;
        } else if (a_move < b_move) {
            current_score = 2;
        }

        if (score != -1 && score != current_score) {
            answer++;
        }

        score = current_score;
    }

    std::cout << answer + 1;

    return 0;
}