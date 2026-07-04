#include <iostream>

constexpr auto MAX_N = 1000;

char gARR[MAX_N][MAX_N];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        for (int i = 0; i < N; ++i) {
            std::cin >> gARR[n][i];
        }
    }

    int K; std::cin >> K;
    int x = 0, y = 0, dir = 0;
    if (K <= N) {                   // 아래로
        x = K - 1;
        y = 0;
        dir = 0;
    }
    else if (K <= (2 * N)) {        // 좌측으로
        x = N - 1;
        y = K - N - 1;
        dir = 1;
    }
    else if (K <= (3 * N)) {        // 위로
        x = 3 * N - K;
        y = N - 1;
        dir = 2;
    }
    else {                          // 우측으로
        x = 0;
        y = 4 * N - K;
        dir = 3;
    }

    int cnt = 0;
    while (x >= 0 && x < N && y >= 0 && y < N) {
        char cell = gARR[y][x];

        cnt += 1;
        if (cell == '/') {
            if (dir == 0) x -= 1, dir = 1;
            else if (dir == 1) y += 1, dir = 0;
            else if (dir == 2) x += 1, dir = 3;
            else if (dir == 3) y -= 1, dir = 2;
        }
        else {
            if (dir == 0) x += 1, dir = 3;
            else if (dir == 1) y -= 1, dir = 2;
            else if (dir == 2) x -= 1, dir = 1;
            else if (dir == 3) y += 1, dir = 0;
        }
    }

    std::cout << cnt;

    return 0;
}