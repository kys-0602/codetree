#include <iostream>

constexpr int SIZE = 19;

int gBoard[SIZE][SIZE];

int dy[4] = {0, 1, 1, 1};
int dx[4] = {1, 0, 1, -1};

bool check(int type, int &outY, int &outX) {
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            if (gBoard[y][x] != type)
                continue;

            for (int dir = 0; dir < 4; dir++) {
                int ny = y;
                int nx = x;
                int cnt = 1;

                while (cnt < 5) {
                    ny += dy[dir];
                    nx += dx[dir];

                    if (ny < 0 || ny >= SIZE ||
                        nx < 0 || nx >= SIZE)
                        break;

                    if (gBoard[ny][nx] != type)
                        break;

                    cnt++;
                }

                if (cnt != 5)
                    continue;

                outY = y + dy[dir] * 2;
                outX = x + dx[dir] * 2;
                return true;
            }
        }
    }

    return false;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int y = 0; y < SIZE; y++)
        for (int x = 0; x < SIZE; x++)
            std::cin >> gBoard[y][x];

    int y, x;

    if (check(1, y, x)) {
        std::cout << 1 << '\n';
        std::cout << y + 1 << ' ' << x + 1;
    }
    else if (check(2, y, x)) {
        std::cout << 2 << '\n';
        std::cout << y + 1 << ' ' << x + 1;
    }
    else {
        std::cout << 0;
    }

    return 0;
}