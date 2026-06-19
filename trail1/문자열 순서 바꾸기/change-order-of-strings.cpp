#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S, T;
    std::cin >> S >> T;

    std::cout << T << '\n' << S;

    return 0;
}