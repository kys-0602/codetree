#include <iostream>

constexpr auto MAX_SIZE = 100;

int DX[] = { 0, 1, 0, -1 };
int DY[] = { 1, 0, -1, 0 };

int gARR[MAX_SIZE][MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;

    int num = 1;
    int x = 0, y = 0;
    int dir = 0;
    while (num <= N * M) {
        gARR[y][x] = num++;

        int nx = x + DX[dir];
        int ny = y + DY[dir];
        if (nx < 0 || nx >= M || ny < 0 || ny >= N || gARR[ny][nx] != 0) {
            dir = (dir + 1) % 4;
        }

        x += DX[dir];
        y += DY[dir];
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            std::cout << gARR[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}