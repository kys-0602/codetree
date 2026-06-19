#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A; std::cin >> A;
    if (A & 1) A += 3;
    if (A % 3 == 0) A /= 3;
    std::cout << A;

    return 0;
}