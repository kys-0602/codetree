#include <iostream>

int DAYS_IN_MONTH[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool f(int M, int D) {
    if (M > 12) return false;
    if (D > 31) return false;
    if (D > DAYS_IN_MONTH[M - 1]) return false;

    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int M, D; std::cin >> M >> D;
    std::cout << (f(M, D) ? "Yes": "No");

    return 0;
}