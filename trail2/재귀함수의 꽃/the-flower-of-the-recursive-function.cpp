#include <iostream>

void print(int N) {
    if (N == 0) return;

    std::cout << N << ' ';
    print(N - 1);
    std::cout << N << ' ';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    print(N);

    return 0;
}