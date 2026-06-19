#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B, C; std::cin >> A >> B >> C;

    int mid = C;
    if ((A >= B && A <= C) || (A >= C && A <= B)) mid = A;
    else if ((B >= A && B <= C) || (B >= C && B <= A)) mid = B;
    else mid = C;

    std::cout << mid;

    return 0;
}