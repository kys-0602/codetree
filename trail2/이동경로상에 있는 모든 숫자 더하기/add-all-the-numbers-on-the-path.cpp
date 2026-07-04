#include <iostream>

constexpr auto MAX_SIZE = 99;

int DX[] = { 0, 1, 0, -1 };
int DY[] = { -1, 0, 1, 0 };

int gARR[MAX_SIZE][MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, T; std::cin >> N >> T;

    std::string str; std::cin >> str;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cin >> gARR[y][x];
        }
    }

    int x = N >> 1, y = N >> 1;
    int dir = 0;
    int sum = gARR[y][x];
    for (const auto& ch : str) {
        if (ch == 'L') {
            dir = (dir - 1 + 4) % 4;
        }
        else if (ch == 'R') {
            dir = (dir + 1) % 4;
        }
        else {
            int nx = x + DX[dir];
            int ny = y + DY[dir];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                sum += gARR[ny][nx];
                x = nx;
                y = ny;
            }
        }
    }

    std::cout << sum;
}