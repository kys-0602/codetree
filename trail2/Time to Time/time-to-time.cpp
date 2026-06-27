#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int A, B, C, D; std::cin >> A >> B >> C >> D;

    int T1 = (A * 60) + B;
    int T2 = (C * 60) + D;

    std::cout << (T2 - T1);

    return 0;
}