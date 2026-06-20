#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int two_sum = 0, cnt = 0;
    for (int i = 0, x = 0; i < 10; ++i) {
        std::cin >> x;
        if (x == 0) break;

        if (x % 2 == 0) {
            two_sum += x;
            cnt += 1;
        }
    }

    std::cout << cnt << ' ' << two_sum;
    
    return 0;
}