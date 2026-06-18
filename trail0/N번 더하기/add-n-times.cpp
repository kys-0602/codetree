#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, N; std::cin >> A >> N;

    for (int i = 0; i < N; ++i) {
        A += N;
        std::cout << A << '\n';
    }

    return 0;
}