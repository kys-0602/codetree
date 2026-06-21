#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int a, b; std::cin >> a >> b;
    int sum = a + b;

    int one_cnt = 0;
    while (sum >= 1) {
        if (sum % 10 == 1) one_cnt += 1;
        sum /= 10;
    }
    std::cout << one_cnt;

    return 0;
}