#include <iostream>

int pow(int a, int b) {
    int prod = 1;
    for (int i = 1; i <= b; ++i) {
        prod *= a;
    }
    return prod;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b; std::cin >> a >> b;
    std::cout << pow(a, b);

    return 0;
}