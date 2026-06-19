#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int Y; std::cin >> Y;

    if ((Y % 4 == 0) && !(Y % 100 == 0 && Y % 400 != 0)) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    return 0;
}