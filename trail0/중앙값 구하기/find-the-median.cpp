#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B, C; std::cin >> A >> B >> C;

    // A, B, C
    if (A < B && B < C) {
        std::cout << B;
    }
    // A, C, B
    else if (A < C && C < B) {
        std::cout << C;
    }
    // B, A, C
    else if (B < A && A < C) {
        std::cout << A;
    }
    // B, C, A
    else if (B < C && C < A) {
        std::cout << C;
    }
    // C, A, B
    else if (C < A && A < B) {
        std::cout << A;
    }
    // C, B, A
    else if (C < B && B < A) {
        std::cout << B;
    }
    return 0;
}