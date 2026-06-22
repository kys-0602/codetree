#include <iostream>

int f(int a, char o, int c) {
    if (o == '+') {
        return a + c;
    } else if (o == '-') {
        return a - c;
    } else if (o == '/') {
        return a / c;
    } else if (o == '*') {
        return a * c;
    } else {
        std::cout << "False";
        return -999;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, c;
    char o;

    std::cin >> a >> o;
    std::getchar();
    std::cin >> c;

    int result = f(a, o, c);
    if (result == -999) return 0;
    std::cout << a << ' ' << o << ' ' << c << ' ' << '=' << ' ' << result;

    return 0;
}