#include <iostream>

void f(std::string& str) {
    int bits = 0b00000000000000000000000000000000;
    
    for (int i = 0; i < str.length(); ++i) {
        bits |= (1 << (str[i] - 'a'));
    }

    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (bits & (1 << i)) {
            cnt++;
        }
    }

    if (cnt > 1) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A; std::cin >> A;
    f(A);

    return 0;
}