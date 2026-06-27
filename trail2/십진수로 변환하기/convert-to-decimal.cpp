#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string bits; std::cin >> bits;

    int N = 0, value = 1;
    for (int i = bits.length() - 1; i >= 0; --i) {
        if (bits[i] == '1') {
            N += value;
        }
        value <<= 1;
    }

    std::cout << N;

    return 0;
}