#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    std::cout << N << '\n';
    if (N < 0) std::cout << "minus";

    return 0;
}