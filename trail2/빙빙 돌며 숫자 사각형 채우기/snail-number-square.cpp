#include <iostream>

constexpr auto MAX_N = 100;
constexpr auto MAX_M = 100;

int gARR[MAX_N][MAX_M];

int DX[] = { 1, 0, -1, 0 };
int DY[] = { 0, 1, 0, -1 };

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;
    
    int x = 0, y = 0;
    int dir = 0;
    for (int i = 1; i <= N * M; ++i) {
        gARR[y][x] = i;

        int nx = x + DX[dir]; int ny = y + DY[dir];
        if (nx < 0 || nx >= M || ny < 0 || ny >= N || gARR[ny][nx] != 0) {
            dir = (dir + 1) % 4;
            nx = x + DX[dir];
            ny = y + DY[dir];
        }

        x = nx;
        y = ny;
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            std::cout << gARR[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}