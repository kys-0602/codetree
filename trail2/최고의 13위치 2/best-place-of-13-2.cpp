#include <iostream>

constexpr auto MAX_SIZE = 20;

int gArr[MAX_SIZE][MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> gArr[i][j];
        }
    }
    
    int answer = 0;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x <= N - 3; ++x) {
            int sum1 = gArr[y][x] + gArr[y][x + 1] + gArr[y][x + 2];

            for (int y2 = 0; y2 < N; ++y2) {
                for (int x2 = 0; x2 <= N - 3; ++x2) {
                    if (((x + 2) < x2 || (x2 + 2) < x) || (y != y2)) {
                        int sum2 = gArr[y2][x2] + gArr[y2][x2 + 1] + gArr[y2][x2 + 2];

                        int sum = sum1 + sum2;
                        if (sum > answer) answer = sum;
                    }
                }
            }
        }
    }

    std::cout << answer;

    return 0;
}