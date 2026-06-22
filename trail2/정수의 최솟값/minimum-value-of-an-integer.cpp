#include <iostream>

int getMin(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    }
    else if (b <= a && b <= c) {
        return b;
    }
    return c;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c; std::cin >> a >> b >> c;
    std::cout << getMin(a, b, c);

    return 0;
}