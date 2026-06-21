#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A, B; std::cin >> A >> B;

    std::cout << (((A + B) == (B + A)) ? "true" : "false");

    return 0;
}