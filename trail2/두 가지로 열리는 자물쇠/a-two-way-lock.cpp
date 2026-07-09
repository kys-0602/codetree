#include <iostream>

int N;

int getDist(int a, int b) {
    int dist = std::abs(a - b);
    return std::min(dist, N - dist);
}

bool func(int i, int j, int k, int a, int b, int c) {
    return getDist(i, a) <= 2 && getDist(j, b) <= 2 && getDist(k, c) <= 2;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N;
    int a1, b1, c1; std::cin >> a1 >> b1 >> c1;
    int a2, b2, c2; std::cin >> a2 >> b2 >> c2;

    int cnt = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            for (int k = 1; k <= N; ++k) {
                if (func(i, j, k, a1, b1, c1) || func(i, j, k, a2, b2, c2)) {
                    cnt += 1;
                }
            }
        }
    }

    std::cout << cnt;

    return 0;
}