#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int gender, age;
    std::cin >> gender >> age;

    if (gender == 0) {
        if (age >= 19) std::cout << "MAN";
        else std::cout << "BOY";
    } else {
        if (age >= 19) std::cout << "WOMAN";
        else std::cout << "GIRL";
    }

    return 0;
}