#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int a, b, c; std::cin >> a >> b >> c;

    for (; a <= b; ++a) {
        if (a % c == 0) {
            std::cout << "YES";
            return 0;
        }
    }

    std::cout << "NO";
    
    return 0;
}