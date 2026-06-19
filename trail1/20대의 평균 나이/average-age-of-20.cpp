#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int sum_age = 0;

    int age, cnt = 0;
    while (std::cin >> age) {
        if (age >= 20 && age <= 29) {
            sum_age += age;
            cnt += 1;
        } else break;
    }

    std::cout.precision(2);
    std::cout << std::fixed << (sum_age / (float)cnt);
    
    return 0;
}