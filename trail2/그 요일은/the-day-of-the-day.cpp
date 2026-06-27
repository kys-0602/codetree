#include <iostream>

constexpr auto DAY_OF_THE_WEEK = { 0, 1, 2, 3, 4, 5, 6 };

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    int m1, d1, m2, d2; std::cin >> m1 >> d1 >> m2 >> d2;
    std::string str; std::cin >> str;

    int total_1 = d1;
    for (int i = 0; i < m1 - 1; ++i) total_1 += days[i];

    int total_2 = d2;
    for (int i = 0; i < m2 - 1; ++i) total_2 += days[i];

    int target = 0;
    if (str == "Mon") target = 0;
    else if (str == "Tue") target = 1;
    else if (str == "Wed") target = 2;
    else if (str == "Thu") target = 3;
    else if (str == "Fri") target = 4;
    else if (str == "Sat") target = 5;
    else if (str == "Sun") target = 6;

    int cnt = 0;
    for (int i = 0; i <= (total_2 - total_1); ++i) {
        if (i % 7 == target) {
            cnt += 1;
        }
    }

    std::cout << cnt;

    return 0;
}