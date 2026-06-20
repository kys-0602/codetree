#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int dice_cnt[6]{ 0 };
    for (int i = 0, x = 0; i < 10; ++i) {
        std::cin >> x;
        dice_cnt[x - 1] += 1;
    }

    for (int i = 0; i < 6; ++i) {
        std::cout << (i + 1) << ' ' << '-' << ' ' << dice_cnt[i] << '\n';
    }
    
    return 0;
}