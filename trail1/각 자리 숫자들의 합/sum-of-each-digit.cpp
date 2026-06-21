#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n; std::cin >> n;

    int sum = 0;
    while (n >= 1) {
        sum += (n % 10);
        n /= 10;
    }
    std::cout << sum;

    return 0;
}