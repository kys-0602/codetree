#include <iostream>

void calc(int& a, int& b) {
    if (a < b) {
        a += 10;
        b <<= 1;
    } else {
        a <<= 1;
        b += 10;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b; std::cin >> a >> b;
    calc(a, b);
    std::cout << a << ' ' << b;

    return 0;
}