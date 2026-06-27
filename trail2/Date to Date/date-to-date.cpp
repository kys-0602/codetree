#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int m1, d1, m2, d2; std::cin >> m1 >> d1 >> m2 >> d2;
    
    int total1 = 0;
    for (int i = 0; i < m1 - 1; ++i) total1 += days[i];
    total1 += d1;

    int total2 = 0;
    for (int i = 0; i < m2 - 1; ++i) total2 += days[i];
    total2 += d2;

    std::cout << (total2 - total1 + 1);
    

    return 0;
}