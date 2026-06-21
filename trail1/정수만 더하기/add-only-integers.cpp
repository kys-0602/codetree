#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string A; std::cin >> A;

    int sum = 0;
    for (const auto& ch : A) {
        if (ch >= '0' && ch <= '9') {
            sum += (ch - '0');
        }
    }

    std::cout << sum;

    return 0;
}