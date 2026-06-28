#include <iostream>

char gARR[202][202];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100, y1 += 100, x2 += 100, y2 += 100;

        for (int y = y1; y < y2; ++y) {
            for (int x = x1; x < x2; ++x) {
                if (n % 2 == 0) {
                    gARR[y][x] = 'R';
                } else {
                    gARR[y][x] = 'B';
                }
            }
        }
    }

    int blue = 0;
    for (int y = 0; y < 202; ++y) {
        for (int x = 0; x < 202; ++x) {
            if (gARR[y][x] == 'B') blue += 1;
        }
    }

    std::cout << blue;

    return 0;
}