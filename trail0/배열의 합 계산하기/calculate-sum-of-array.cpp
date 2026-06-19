#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A[] = { 3, 1, 4, 5, 9 };

    std::cout << A[1] + A[3] + A[4];

    return 0;
}