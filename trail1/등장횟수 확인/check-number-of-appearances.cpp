#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int even_cnt = 0;
    for (int i = 0, x = 0; i < 5; ++i) {
        std::cin >> x;

        if (!(x & 1)) even_cnt += 1;
    }

    std::cout << even_cnt;
    
    return 0;
}