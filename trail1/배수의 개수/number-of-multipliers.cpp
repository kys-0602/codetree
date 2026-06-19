#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int three_cnt = 0;
    int five_cnt = 0;
    for (int i = 0, x = 0; i < 10; ++i) {
        std::cin >> x;
        if (x % 3 == 0) three_cnt += 1;
        if (x % 5 == 0) five_cnt += 1;
    }

    std::cout << three_cnt << ' ' << five_cnt;
    
    return 0;
}