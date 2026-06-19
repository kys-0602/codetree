#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int input = 0;
    while (input != 25) {
        std::cin >> input;

        if (input < 25) std::cout << "Higher\n";
        else if (input > 25) std::cout << "Lower\n";
        else {
            std::cout << "Good";
        }
    }

    return 0;
}