#include <iostream>

int print(int N) {
    return ((N * (N + 1)) >> 1) / 10;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << print(N);

    return 0;
}