#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0, x = 0; n < N; ++n) {
        std::cin >> x;

        if ((x & 1) && (x % 3 == 0)) std::cout << x << '\n';
    }
    
    return 0;
}