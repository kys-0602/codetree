#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int B, A; std::cin >> B >> A;

    while (B >= A) {
        std::cout << B << ' ';
        B -= 2;
    }
    
    return 0;
}