#include <iostream>

int gSTUDENTS[101];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M, K; std::cin >> N >> M >> K;
    for (int m = 0, x = 0; m < M; ++m) {
        std::cin >> x;

        gSTUDENTS[x - 1] += 1;
        if (gSTUDENTS[x - 1] >= K) {
            std::cout << x;
            return 0;
        }
    }

    std::cout << -1;

    return 0;
}