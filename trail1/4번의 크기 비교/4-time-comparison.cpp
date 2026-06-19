#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B, C, D, E; std::cin >> A >> B >> C >> D >> E;

    std::cout << (A > B) << '\n';
    std::cout << (A > C) << '\n';
    std::cout << (A > D) << '\n';
    std::cout << (A > E) << '\n';

    return 0;
}