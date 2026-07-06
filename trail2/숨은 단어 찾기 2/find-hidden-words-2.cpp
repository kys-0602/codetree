#include <iostream>

constexpr auto MAX_SIZE = 50;

char gArr[MAX_SIZE][MAX_SIZE];

// 상, 하, 좌, 우, 좌상, 우상, 좌하, 우하
int DX[] = { 0, 0, -1, 1, -1, 1, -1, 1 };
int DY[] = { -1, 1, 0, 0, -1, -1, 1, 1 };

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;
    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            std::cin >> gArr[n][m];
        }
    }

    int answer = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int d = 0; d < 8; ++d) {
                int nx1 = j,                ny1 = i;
                int nx2 = j + DX[d],        ny2 = i + DY[d];
                int nx3 = j + DX[d] * 2,    ny3 = i + DY[d] * 2;

                if (nx2 < 0 || nx2 >= M || ny2 < 0 || ny2 >= N) continue;
                if (nx3 < 0 || nx3 >= M || ny3 < 0 || ny3 >= N) continue;

                char ch1 = gArr[ny1][nx1];
                char ch2 = gArr[ny2][nx2];
                char ch3 = gArr[ny3][nx3];

                if (ch1 == 'L' && ch2 == 'E' && ch3 == 'E') {
                    answer += 1;
                }
            }
        }
    }

    std::cout << answer;

    return 0;
}