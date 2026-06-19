#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    std::cout << (N * N);
    if (N < 5) std::cout << "\ntiny";

    return 0;
}