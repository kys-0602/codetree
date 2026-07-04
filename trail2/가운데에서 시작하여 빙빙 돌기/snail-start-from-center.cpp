#include <iostream>

constexpr auto MAX_SIZE = 100;

int DX[] = { 1, 0, -1, 0 };
int DY[] = { 0, -1, 0, 1 };

int gARR[MAX_SIZE][MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;

    int num = 1;
    int x = N >> 1, y = N >> 1;

    gARR[y][x] = num++;

    int dir = 0;
    int len = 1;

    while (num <= N * N) {
        for (int r = 0; r < 2; ++r) {
            for (int l = 0; l < len; ++l) {
                x += DX[dir];
                y += DY[dir];

                gARR[y][x] = num++;
            }

            dir = (dir + 1) % 4;
        }

        len++;
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << gARR[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}