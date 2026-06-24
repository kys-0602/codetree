#include <iostream>

int f(int N) {
    if (N == 1) return 1;
    else if (N == 2) return 2;

    return f(N - 1) + f(N / 3);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << f(N);

    return 0;
}