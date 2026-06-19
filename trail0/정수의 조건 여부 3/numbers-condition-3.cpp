#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a; std::cin >> a;

    if ((a % 13 == 0) || (a % 19 == 0)) {
        std::cout << "True";
    } else {
        std::cout << "False";
    }

    return 0;
}