#include <iostream>

constexpr auto MAX_SIZE = 100;

int DX[] = { 1, 0, -1, 0 };
int DY[] = { 0, 1, 0, -1 };

char gARR[MAX_SIZE][MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;

    int idx = 0;
    int x = 0, y = 0, dir = 0;
    while (idx < (N * M)) {
        gARR[y][x] = ((idx++) % 26) + 'A';

        int nx = x + DX[dir];
        int ny = y + DY[dir];
        if (nx < 0 || nx >= M || ny < 0 || ny >= N || gARR[ny][nx] != '\0') {
            dir = (dir + 1) % 4;
        }

        x += DX[dir];
        y += DY[dir];
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            std::cout << (char)gARR[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}