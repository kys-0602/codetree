#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B, C; std::cin >> A >> B >> C;

    std::cout << ((B > A) && (B < C));

    return 0;
}