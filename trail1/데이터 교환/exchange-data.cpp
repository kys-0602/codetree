#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a = 5, b = 6, c = 7;
    int d = a, e = b, f = c;

    b = d;
    c = e;
    a = f;
    
    std::cout << a << '\n' << b << '\n' << c;

    return 0;
}