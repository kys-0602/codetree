#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];

    int max_cnt = 1;
    int cnt = 1;
    for (int i = 1; i < N; ++i) {
        if (vec[i - 1] == vec[i]) {
            cnt += 1;
        } else {
            if (cnt > max_cnt) {
                max_cnt = cnt;
            }
            cnt = 1;
        }
    }

    if (cnt > max_cnt) max_cnt = cnt;

    std::cout << max_cnt;

    return 0;
}