#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0); for (int i = 0; i < N; ++i) std::cin >> vec[i];

    int neg_cnt = 0, pos_cnt = 0;
    int max = -1;
    for (int i = 0; i < N; ++i) {
        if (vec[i] < 0) {
            neg_cnt += 1;
            pos_cnt = 0;
        } else {
            neg_cnt = 0;
            pos_cnt += 1;
        }

        if (neg_cnt > max) max = neg_cnt;
        if (pos_cnt > max) max = pos_cnt;
    }

    std::cout << max;

    return 0;
}