#include <iostream>

void printStar(int N) {
    if (N == 0) return;

    for (int i = 0; i < N; ++i) std::cout << '*' << ' ';
    std::cout << '\n';
    printStar(N - 1);
    for (int i = 0; i < N; ++i) std::cout << '*' << ' ';
    std::cout << '\n';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    printStar(n);

    return 0;
}