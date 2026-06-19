#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char C; std::cin >> C;
    int N; std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        std::cout << (C == 'A' ? i : (N - i + 1)) << ' ';
    }
    
    return 0;
}