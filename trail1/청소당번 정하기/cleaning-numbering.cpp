#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n; std::cin >> n;

    int two_cnt = 0, three_cnt = 0, twelve_cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if ((i % 2 == 0 && i % 3 == 0 && i % 12 == 0) || (i % 12 == 0)) twelve_cnt += 1;
        else if ((i % 2 == 0 && i % 3 == 0) || (i % 3 == 0)) three_cnt += 1;
        else if (i % 2 == 0) two_cnt += 1;
    }

    std::cout << two_cnt << ' ' << three_cnt << ' ' << twelve_cnt;
    
    return 0;
}