#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N; std::cin >> N;
    int prev_num = 0, cnt = 1, max = -1;
    for (int n = 0, x = 0; n < N; ++n) {
        std::cin >> x;

        if (n > 0) {
            if (prev_num < x) {
                cnt += 1;
            } else {
                if (cnt > max) max = cnt;
                cnt = 1;
            }
        }
        prev_num = x;
    }
    if (cnt > max) max = cnt;

    std::cout << max;

    return 0;
}