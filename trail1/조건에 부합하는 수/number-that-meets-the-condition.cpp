#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A; std::cin >> A;

    for (int i = 1; i <= A; ++i) {
        if (!(i & 1) && (i % 4 != 0)) continue;
        if ((i / 8) % 2 == 0) continue;
        if ((i % 7) < 4) continue;

        std::cout << i << ' ';
    }
    
    return 0;
}