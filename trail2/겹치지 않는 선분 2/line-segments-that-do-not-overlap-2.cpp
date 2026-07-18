#include <iostream>
#include <vector>

struct Point2D {
    int startX;
    int endX;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<Point2D> pts(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> pts[i].startX >> pts[i].endX;
    }

    int answer = 0;
    for (int i = 0; i < N; ++i) {
        bool flag = false;
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;

            // 교차?!
            if (
                (pts[i].startX > pts[j].startX && pts[i].endX < pts[j].endX) ||
                (pts[i].startX < pts[j].startX && pts[i].endX > pts[j].endX)
            ) {
                flag = true;
                break;
            }
        }

        if (flag == false) answer += 1;
    }

    std::cout << answer;

    return 0;
}