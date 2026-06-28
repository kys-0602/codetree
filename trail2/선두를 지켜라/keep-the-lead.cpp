#include <iostream>
#include <vector>

std::vector<int> vec1;
std::vector<int> vec2;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;
    for (int n = 0; n < N; ++n) {
        int v, t; std::cin >> v >> t;

        for (int i = 0; i < t; ++i) {
            vec1.push_back(v);
        }
    }

    for (int m = 0; m < M; ++m) {
        int v, t; std::cin >> v >> t;

        for (int i = 0; i < t; ++i) {
            vec2.push_back(v);
        }
    }

    // A: 1, B: 2, 아직 없음: 0
    int first = 0;
    int cnt = 0;

    int dist_a = 0, dist_b = 0;

    for (int i = 0; i < vec1.size(); ++i) {
        dist_a += vec1[i];
        dist_b += vec2[i];

        if (dist_a > dist_b) {
            if (first == 2) cnt++;
            first = 1;
        } else if (dist_a < dist_b) {
            if (first == 1) cnt++;
            first = 2;
        }
    }

    std::cout << cnt;

    return 0;
}