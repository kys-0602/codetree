#include <iostream>

int f(int N) {
    if (N == 1) return 0;

    return 1 + f((!(N & 1) ? N >> 1 : N * 3 + 1));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << f(N);

    return 0;
}