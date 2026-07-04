#include <iostream>

constexpr auto MAX_SIZE = 15;

char gArr[MAX_SIZE][MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int R, C; std::cin >> R >> C;
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            std::cin >> gArr[r][c]; std::getchar();
        }
    }

    int cnt = 0;
    for (int r = 1; r < R - 1; ++r) {
        for (int c = 1; c < C - 1; ++c) {
            for (int y = r + 1; y < R - 1; ++y) {
                for (int x = c + 1; x < C - 1; ++x) {
                    if (gArr[0][0] != gArr[R - 1][C - 1] && gArr[r][c] != gArr[y][x] && gArr[y][x] != gArr[R - 1][C - 1]) {
                        cnt += 1;
                    }
                }
            }
        }
    }

    std::cout << cnt;

    return 0;
}