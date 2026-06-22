#include <iostream>
using namespace std;

// No LeapYear
int DAYS_IN_MONTH[] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};

bool isLeapYear(int year) {
    return (year % 4 == 0) && !(year % 100 == 0 || year % 400 == 0); 
}

void f(int Y, int M, int D) {
    // 윤년 여부에 따라 2월 일수 다름
    bool leapYearFlag = isLeapYear(Y);
    if (leapYearFlag) DAYS_IN_MONTH[1] = 29;
    else DAYS_IN_MONTH[1] = 28;

    // 존재하지 않는 일수라면
    if (DAYS_IN_MONTH[M - 1] < D) {
        std::cout << "-1";   
        return;
    }

    // 계절
    if (M >= 3 && M <= 5) std::cout << "Spring";
    else if (M >= 6 && M <= 8) std::cout << "Summer";
    else if (M >= 9 && M <= 11) std::cout << "Fall";
    else std::cout << "Winter";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int Y, M, D; std::cin >> Y >> M >> D;
    f(Y, M, D);

    return 0;
}