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
    for (int n = 0; n < N; ++n) std::cin >> points[n].x >> points[n].y;

    int answer = 1'000'000'000;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            Point2D pt1 = points[i];
            Point2D pt2 = points[j];

            int p1 = (pt1.x - pt2.x) * (pt1.x - pt2.x);
            int p2 = (pt1.y - pt2.y) * (pt1.y - pt2.y);
            int dist = p1 + p2;

            if (dist < answer) answer = dist;
        }
    }

    std::cout << answer;

    return 0;
}