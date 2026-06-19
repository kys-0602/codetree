#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    int start = 3;
    while (start <= N) {
        std::cout << start << ' ';
        start += 3;
    }

    return 0;
}