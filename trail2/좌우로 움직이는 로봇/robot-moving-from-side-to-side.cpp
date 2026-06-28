#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    std::vector<int> a;
    int a_pos = 0;

    for (int n = 0; n < N; ++n) {
        int t; char d;
        std::cin >> t >> d;

        int dir = (d == 'L' ? -1 : 1);

        for (int i = 0; i < t; ++i) {
            a_pos += dir;
            a.push_back(a_pos);
        }
    }

    std::vector<int> b;
    int b_pos = 0;

    for (int m = 0; m < M; ++m) {
        int t; char d;
        std::cin >> t >> d;

        int dir = (d == 'L' ? -1 : 1);

        for (int i = 0; i < t; ++i) {
            b_pos += dir;
            b.push_back(b_pos);
        }
    }

    int size_a = a.size();
    int size_b = b.size();
    int total_time = std::max(size_a, size_b);

    int answer = 0;

    int prev_a = 0;
    int prev_b = 0;

    for (int t = 0; t < total_time; ++t) {
        int pos_a = (t < size_a) ? a[t] : a.back();
        int pos_b = (t < size_b) ? b[t] : b.back();

        if (prev_a != prev_b && pos_a == pos_b) {
            answer++;
        }

        prev_a = pos_a;
        prev_b = pos_b;
    }

    std::cout << answer;

    return 0;
}