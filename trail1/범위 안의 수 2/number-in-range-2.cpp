#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int sum = 0, cnt = 0;
    for (int i = 0, x = 0; i < 10; ++i) {
        std::cin >> x;

        if (x >= 0 && x <= 200) {
            sum += x;
            cnt += 1;
        }
    }

    float avg = sum / (float)cnt;
    
    std::cout.precision(1);
    std::cout << sum << ' ' << std::fixed << avg;
    
    return 0;
}