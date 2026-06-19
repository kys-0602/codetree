#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        if ((i % 3 == 0) || (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) || (i / 10 % 100 == 3 || i / 10 % 100 == 6 || i / 10 % 100 == 9)) std::cout << 0 << ' ';
        else std::cout << i << ' ';
    }
    
    return 0;
}