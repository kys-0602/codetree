#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    int sum = 0;
    for (; N <= 100; ++N) sum += N;
    std::cout << sum;
    
    return 0;
}