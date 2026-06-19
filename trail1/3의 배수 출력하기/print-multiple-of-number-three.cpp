#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    int start = 1;
    while (start <= N) {
        if (start % 3 == 0) {
            std::cout << start << ' ';
        }
        start += 1;
    }

    return 0;
}