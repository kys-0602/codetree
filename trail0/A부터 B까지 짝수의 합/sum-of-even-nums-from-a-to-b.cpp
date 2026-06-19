#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int even_sum = 0;
    int A, B; std::cin >> A >> B;
    for (; A <= B; ++A) {
        if (!(A & 1)) even_sum += A;
    }

    std::cout << even_sum;

    return 0;
}