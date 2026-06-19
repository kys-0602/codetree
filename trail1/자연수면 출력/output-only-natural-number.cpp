#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;

    if (A > 0)
        for (int i = 0; i < B; ++i) std::cout << A;
    else
        std::cout << 0;
    
    return 0;
}