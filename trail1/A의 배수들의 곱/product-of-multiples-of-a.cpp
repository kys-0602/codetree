#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;

    int prod = 1;
    for (int i = 1; i <= B; ++i) {
        if (i % A == 0) {
            prod *= i;
        }
    }

    std::cout << prod;
    
    return 0;
}