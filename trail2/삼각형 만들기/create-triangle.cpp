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
    std::vector<Point2D> pts(N);
    for (int i = 0; i < N; ++i) std::cin >> pts[i].x >> pts[i].y;

    int answer = 0;

    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if (pts[i].x == pts[j].x && pts[i].y == pts[k].y) {
                    int width = abs(pts[i].x - pts[k].x);
                    int height = abs(pts[i].y - pts[j].y);
                    answer = std::max(answer, width * height);
                }

                if (pts[i].x == pts[k].x && pts[i].y == pts[j].y) {
                    int width = abs(pts[i].x - pts[j].x);
                    int height = abs(pts[i].y - pts[k].y);
                    answer = std::max(answer, width * height);
                }

                if (pts[j].x == pts[i].x && pts[j].y == pts[k].y) {
                    int width = abs(pts[j].x - pts[k].x);
                    int height = abs(pts[j].y - pts[i].y);
                    answer = std::max(answer, width * height);
                }

                if (pts[j].x == pts[k].x && pts[j].y == pts[i].y) {
                    int width = abs(pts[j].x - pts[i].x);
                    int height = abs(pts[j].y - pts[k].y);
                    answer = std::max(answer, width * height);
                }

                if (pts[k].x == pts[i].x && pts[k].y == pts[j].y) {
                    int width = abs(pts[k].x - pts[j].x);
                    int height = abs(pts[k].y - pts[i].y);
                    answer = std::max(answer, width * height);
                }

                if (pts[k].x == pts[j].x && pts[k].y == pts[i].y) {
                    int width = abs(pts[k].x - pts[i].x);
                    int height = abs(pts[k].y - pts[j].y);
                    answer = std::max(answer, width * height);
                }
            }
        }
    }

    std::cout << answer;
}