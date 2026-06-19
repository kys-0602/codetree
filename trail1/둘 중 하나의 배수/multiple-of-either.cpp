#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A; std::cin >> A;
    std::cout << ((A % 3 == 0 || A % 5 == 0));

    return 0;
}