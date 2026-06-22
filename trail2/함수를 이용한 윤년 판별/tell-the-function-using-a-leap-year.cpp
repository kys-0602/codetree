#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0) && !(year % 100 == 0 && year % 400 != 0);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int y; std::cin >> y;
    std::cout << (isLeapYear(y) ? "true" : "false");

    return 0;
}