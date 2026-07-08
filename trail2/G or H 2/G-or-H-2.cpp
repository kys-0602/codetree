#include <algorithm>
#include <iostream>
#include <vector>

constexpr auto MAX_SIZE = 100 + 1;

char gArr[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0);
    for (int n = 0; n < N; ++n) {
        int pos; char ch;
        std::cin >> pos >> ch;

        gArr[pos] = ch;
        vec[n] = pos;
    }

    std::sort(vec.begin(), vec.end());

    int answer = -1;
    for (int i = 0; i < vec.size(); ++i) {
        int g_cnt = 0, h_cnt = 0;
        for (int j = i; j < vec.size(); ++j) {
            int pos = vec[j];

            if      (gArr[pos] == 'G') g_cnt += 1;
            else if (gArr[pos] == 'H') h_cnt += 1;

            // g_cnt 또는 h_cnt가 0이면 다른 하나가 오로지 그 사람으로만 이루어짐
            if (g_cnt == h_cnt || g_cnt == 0 || h_cnt == 0) {
                int dist = vec[j] - vec[i];

                if (dist > answer) answer = dist;
            }
        }
    }

    std::cout << answer;

    return 0;
}