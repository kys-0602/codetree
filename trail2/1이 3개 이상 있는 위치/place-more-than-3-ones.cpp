#include <iostream>

constexpr auto MAX_N = 100;

int DX[] = { 0, 0, -1, 1 };
int DY[] = { -1, 1, 0, 0 };
int gARR[MAX_N][MAX_N];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cin >> gARR[y][x];
        }
    }

    int answer = 0;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            int cnt = 0;
            for (int d = 0; d < 4; ++d) {
                int nx = x + DX[d];
                int ny = y + DY[d];
                
                if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                    if (gARR[ny][nx] == 1) cnt += 1;
                }
            }

            if (cnt >= 3) answer += 1;
        }
    }

    std::cout << answer;

    return 0;
}