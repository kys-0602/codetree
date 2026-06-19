#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int y, m, d;
    char dot;
    std::cin >> y >> dot >> m >> dot >> d;
    std::cout << m << '-' << d << '-' << y;

    return 0;
}