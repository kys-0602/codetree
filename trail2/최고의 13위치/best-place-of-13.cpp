#include <iostream>

constexpr auto MAX_SIZE = 20;

int gArr[MAX_SIZE][MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cin >> gArr[y][x];
        }
    }

    int max = -1;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x <= N - 3; ++x) {
            int coin = 0;
            for (int i = 0; i < 3; ++i) {
                if (gArr[y][x + i] == 1) coin += 1;
            }

            if (coin > max) max = coin;
        }
    }

    std::cout << max;

    return 0;
}