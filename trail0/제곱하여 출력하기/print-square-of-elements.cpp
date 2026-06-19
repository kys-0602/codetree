#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        int x; std::cin >> x;
        std::cout << (x * x) << ' ';
    }

    return 0;
}