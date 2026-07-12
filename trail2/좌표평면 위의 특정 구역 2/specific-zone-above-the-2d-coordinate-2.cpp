#include <iostream>
#include <vector>

struct Point2D {
    int x;
    int y;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<Point2D> points(N);
    for (int i = 0; i < N; ++i) std::cin >> points[i].x >> points[i].y;

    int answer = 2'000'000'000;
    for (int i = 0; i < N; ++i) {
        int maxX = -2'000'000'000;
        int minX = 2'000'000'000;
        int maxY = -2'000'000'000;
        int minY = 2'000'000'000;
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;

            maxX = std::max(maxX, points[j].x);
            minX = std::min(minX, points[j].x);
            maxY = std::max(maxY, points[j].y);
            minY = std::min(minY, points[j].y);
        }

        int area = (maxX - minX) * (maxY - minY);
        if (area < answer) answer = area;
    }

    std::cout << answer;

    return 0;
}