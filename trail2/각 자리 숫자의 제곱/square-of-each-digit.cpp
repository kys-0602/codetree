#include <iostream>

int powSum(int N) {
    if (N == 0) return 0;

    int mod = N % 10;

    return (mod * mod) + powSum(N / 10);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << powSum(N);

    return 0;
}