#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int gender; std::cin >> gender;
    int age; std::cin >> age;

    if (gender == 0 && age >= 19) std::cout << "MAN";
    else if (gender == 0 && age < 19) std::cout << "BOY";
    else if (gender == 1 && age >= 19) std::cout << "WOMAN";
    else if (gender == 1 && age < 19) std::cout << "GIRL";

    return 0;
}