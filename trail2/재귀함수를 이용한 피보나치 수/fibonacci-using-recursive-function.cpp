#include <iostream>

int fibonacci(int N) {
    if (N == 1) return 1;
    else if (N == 2) return 1;

    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << fibonacci(N);

    return 0;
}