#include <iostream>

int f(int N) {
    if (N == 0) return 0;

    return (N % 10) + f(N / 10);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c; std::cin >> a >> b >> c;
    int n = a * b * c;
    std::cout << f(n);

    return 0;
}