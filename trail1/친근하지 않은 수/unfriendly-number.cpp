#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) continue;
        cnt += 1;
    }

    std::cout << cnt;
    
    return 0;
}