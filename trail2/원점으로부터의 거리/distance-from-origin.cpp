#include <algorithm>
#include <iostream>
#include <vector>

class Point2D {
public:
    int id;
    int x;
    int y;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<Point2D> pt(N);
    for (int i = 0; i < N; ++i) {
        pt[i].id = i + 1;
        std::cin >> pt[i].x >> pt[i].y;
    }

    std::sort(pt.begin(), pt.end(), [&](const auto& p1, const auto& p2) {
        int dist1 = std::abs(p1.x - 0) + std::abs(p1.y - 0);
        int dist2 = std::abs(p2.x - 0) + std::abs(p2.y - 0);

        if (dist1 == dist2) return p1.id < p2.id;
        return dist1 < dist2;
    });

    for (const auto& p : pt) {
        std::cout << p.id << '\n';
    }

    return 0;
}