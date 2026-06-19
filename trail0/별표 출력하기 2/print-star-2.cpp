#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (int i = N; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << '*' << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}