#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int attendance_no; std::cin >> attendance_no;

    if (attendance_no == 1) std::cout << "John";
    else if (attendance_no == 2) std::cout << "Tom";
    else if (attendance_no == 3) std::cout << "Paul";
    else std::cout << "Vacancy";

    return 0;
}