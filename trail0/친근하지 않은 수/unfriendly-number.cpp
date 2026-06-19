#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int cnt = 0;
    int N; std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) continue;
        else if (i % 3 == 0) continue;
        else if (i % 5 == 0) continue;

        cnt += 1;
    }

    std::cout << cnt;

    return 0;
}