#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, T; std::cin >> N >> T;

    int cnt = 0, max = -1;
    for (int n = 0, x = 0; n < N; ++n) {
        std::cin >> x;

        if (x > T) {
            cnt += 1;
        } else {
            if (cnt > max) max = cnt;
            cnt = 0;
        }
    }

    if (cnt > max) max = cnt;
    std::cout << max;

    return 0;
}