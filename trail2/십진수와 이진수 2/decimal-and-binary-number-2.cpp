#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string bits; std::cin >> bits;

    int num = 0, value = 1;
    for (int i = bits.length() - 1; i >= 0; --i) {
        if (bits[i] == '1') {
            num += value;
        }
        value <<= 1;
    }

    num *= 17;
    
    std::string answer = "";
    while (num > 0) {
        answer += ((num & 1) + '0');
        num >>= 1;
    }

    for (int i = answer.length() - 1; i >= 0; --i) std::cout << answer[i];

    return 0;
}