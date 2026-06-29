#include <iostream>

constexpr auto MAX_N = 50;

int gARR[MAX_N][MAX_N];

// 상, 우, 하, 좌
int DX[] = { 0, 1, 0, -1 };
int DY[] = { -1, 0, 1, 0 };

int getDirIdx(char dir) {
    if (dir == 'U') return 0;
    else if (dir == 'R') return 1;
    else if (dir == 'D') return 2;
    return 3;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, T; std::cin >> N >> T;
    int r, c; std::cin >> r >> c; r -= 1, c -= 1;
    char d; std::cin >> d;

    int idx = getDirIdx(d);
    for (int t = 0; t < T; ++t) {
        int nx = c + DX[idx];
        int ny = r + DY[idx];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            c = nx;
            r = ny;
        } else {
            idx = (idx + 2) % 4;
        }
    }

    std::cout << r + 1 << ' ' << c + 1;

    return 0;
}