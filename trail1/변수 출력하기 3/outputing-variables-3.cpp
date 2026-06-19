#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 1;
    int b = 2;
    char c = 'C';

    std::cout << a << "->" << b << "->" << c;

    return 0;
}