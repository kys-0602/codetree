#include <iostream>

struct PersonInfo {
    int age;
    char gender;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    PersonInfo pi1, pi2;
    std::cin >> pi1.age >> pi1.gender;
    std::cin >> pi2.age >> pi2.gender;

    if ((pi1.age >= 19 && pi1.gender == 'M') || (pi2.age >= 19 && pi2.gender == 'M')) {
        std::cout << 1;
    } else {
        std::cout << 0;
    }

    return 0;
}