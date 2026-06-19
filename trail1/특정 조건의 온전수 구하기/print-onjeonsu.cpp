#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) continue;
        else if (i % 10 == 5) continue;
        else if (i % 3 == 0 && i % 9 != 0) continue;

        std::cout << i << ' ';
    }
    
    return 0;
}