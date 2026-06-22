#include <iostream>

int factorial(int N) {
    if (N == 0 || N == 1) return 1;

    return N * factorial(N - 1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << factorial(N);

    return 0;
}