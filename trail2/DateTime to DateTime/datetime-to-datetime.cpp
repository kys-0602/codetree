#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int A, B, C; std::cin >> A >> B >> C;

    int time1 = 11 * 60 + 11;
    int time2 = (B * 60 + C) + ((A - 11) * (60 * 24));

    if ((time2 - time1) < 0) std::cout << -1;
    else std::cout << time2 - time1;

    return 0;
}