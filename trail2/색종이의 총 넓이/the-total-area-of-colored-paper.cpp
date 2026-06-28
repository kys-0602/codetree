#include <iostream>

int gARR[202][202];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        int x, y; std::cin >> x >> y;
        x += 100, y += 100;

        for (int _y = y; _y < y + 8; ++_y) {
            for (int _x = x; _x < x + 8; ++_x) {
                gARR[_y][_x] += 1;
            }
        }
    }

    int answer = 0;
    for (int y = 0; y < 202; ++y) {
        for (int x = 0; x < 202; ++x) {
            if (gARR[y][x] > 0) answer += 1;
        }
    }

    std::cout << answer;

    return 0;
}