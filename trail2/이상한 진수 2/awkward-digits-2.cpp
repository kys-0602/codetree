#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string bits; std::cin >> bits;

    bool found = false;
    for (int i = 1; i < bits.length(); ++i) {
        if (bits[i] == '0') {
            bits[i] = '1';
            found = true;
            break;
        }
    }

    if (found == false) {
        bits[bits.length() - 1] = '0';
    }

    int num = 0, val = 1;
    for (int i = bits.length() - 1; i >= 0; --i) {
        if (bits[i] == '1') {
            num += val;
        }
        
        val <<= 1;        
    }

    std::cout << num;

    return 0;
}