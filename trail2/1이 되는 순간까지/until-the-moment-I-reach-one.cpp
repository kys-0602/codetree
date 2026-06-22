#include <iostream>

int getCnt(int N) {
    if (N == 1) return 0;

    if (N % 2 == 0) return getCnt(N >> 1) + 1;
    return getCnt(N / 3) + 1;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << getCnt(N);

    return 0;
}