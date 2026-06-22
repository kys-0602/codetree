#include <iostream>

int sum(int N) {
    if (N == 1) return 1;

    return N + sum(N - 1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << sum(N);
    return 0;
}