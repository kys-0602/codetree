#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;

    while (A <= B) {
        std::cout << A << ' ';
        if (A & 1) {
            A <<= 1;
        } else {
            A += 3;
        }
    }

    return 0;
}