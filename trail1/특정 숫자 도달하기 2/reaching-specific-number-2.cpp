#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (; N >= 1; --N) {
        std::cout << N << ' ';
    }

    return 0;
}