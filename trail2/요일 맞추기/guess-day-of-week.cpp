#include <iostream>

constexpr const char* DAY_OF_THE_WEEK[] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    int m1, d1, m2, d2; std::cin >> m1 >> d1 >> m2 >> d2;

    int total_1 = d1;
    for (int i = 0; i < m1 - 1; ++i) total_1 += days[i];

    int total_2 = d2;
    for (int i = 0; i < m2 - 1; ++i) total_2 += days[i];

    int diff = total_2 - total_1;
    int idx = (diff % 7 + 7) % 7;
    std::cout << DAY_OF_THE_WEEK[idx];

    return 0;
}