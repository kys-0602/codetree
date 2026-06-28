#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N, M; std::cin >> N >> M;

    std::vector<int> a_pattern;
    for (int n = 0; n < N; ++n) {
        char d; int t;
        std::cin >> d;
        std::getchar();
        std::cin >> t;

        int dir = (d == 'L') ? -1 : 1;
        for (int i = 0; i < t; ++i) a_pattern.push_back(dir);
    }

    std::vector<int> b_pattern;
    for (int m = 0; m < M; ++m) {
        char d; int t;
        std::cin >> d;
        std::getchar();
        std::cin >> t;

        int dir = (d == 'L') ? -1 : 1;
        for (int i = 0; i < t; ++i) b_pattern.push_back(dir);
    }

    int pos_a = 0;
    int pos_b = 0;

    for (int t = 0; t < a_pattern.size(); ++t) {
        pos_a += a_pattern[t];
        pos_b += b_pattern[t];

        if (pos_a == pos_b) {
            std::cout << t + 1;
            return 0;
        }
    }

    std::cout << -1;

    return 0;
}