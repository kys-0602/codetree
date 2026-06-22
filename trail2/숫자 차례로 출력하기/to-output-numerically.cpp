#include <iostream>

void Recursive1(int N) {
    if (N == 0) return;

    Recursive1(N - 1);
    std::cout << N << ' ';
}

void Recursive2(int N) {
    if (N == 0) return;

    std::cout << N << ' ';
    Recursive2(N - 1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    Recursive1(N);
    std::cout << '\n';
    Recursive2(N);

    return 0;
}