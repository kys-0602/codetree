#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M; std::cin >> N >> M;

    while (N != 0) {
        std::cout << N << '\n';
        N /= M;
    }

    return 0;
}