#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    int sum = 0;
    for (int i = 0, x = 0; i < N; ++i) {
        std::cin >> x;
        if ((x & 1) && x % 3 == 0) sum += x;
    }
    std::cout << sum;
    
    return 0;
}