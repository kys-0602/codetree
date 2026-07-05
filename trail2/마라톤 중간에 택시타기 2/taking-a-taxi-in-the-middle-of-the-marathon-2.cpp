#include <iostream>

constexpr auto MAX_SIZE = 100;

struct Point2D {
    int x;
    int y;
};

Point2D gArr[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        std::cin >> gArr[n].x >> gArr[n].y;
    }

    int answer = 1'000'000'000;
    for (int i = 1; i < N - 1; ++i) {
        int dist = 0;
        for (int j = 0; j < N - 1; ++j) {
            dist += (std::abs(gArr[j].x - gArr[j + 1].x) + std::abs(gArr[j].y - gArr[j + 1].y));
        }

        dist -= (std::abs(gArr[i - 1].x - gArr[i].x) + std::abs(gArr[i - 1].y - gArr[i].y));
        dist -= (std::abs(gArr[i].x - gArr[i + 1].x) + std::abs(gArr[i].y - gArr[i + 1].y));
        dist += (std::abs(gArr[i - 1].x - gArr[i + 1].x) + std::abs(gArr[i - 1].y - gArr[i + 1].y));

        if (dist < answer) answer = dist;
    }

    std::cout << answer;

    return 0;
}