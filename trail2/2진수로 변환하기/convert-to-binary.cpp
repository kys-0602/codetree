#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string bits = "";
    int N; std::cin >> N;
    if (N == 0) {
        std::cout << 0;
        return 0;
    }

    while (N > 0) {
        int bit = N & 1;
        bits += (bit + '0');
        N >>= 1;
    }

    for (int i = bits.length() - 1; i >= 0; --i) {
        std::cout << bits[i];
    }

    return 0;
}