#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char a = 'C';
    a = 'T';
    std::cout << a;

    return 0;
}