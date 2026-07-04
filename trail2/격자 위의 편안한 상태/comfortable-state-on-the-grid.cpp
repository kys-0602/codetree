#include <iostream>

constexpr auto MAX_N = 100;

int DX[] = { 0, 0, -1, 1 };
int DY[] = { -1, 1, 0, 0 };

int gARR[MAX_N][MAX_N];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N, M; std::cin >> N >> M;
    for (int m = 0; m < M; ++m) {
        int r, c; std::cin >> r >> c;
        r -= 1, c -= 1;

        gARR[r][c] = 1;

        int cnt = 0;
        for (int d = 0; d < 4; ++d) {
            int nx = c + DX[d];
            int ny = r + DY[d];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N && gARR[ny][nx] == 1) {
                cnt += 1;
            }
        }

        std::cout << (cnt == 3) << '\n';
    }

    return 0;
}