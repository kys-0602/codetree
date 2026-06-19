#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int first, medium, end;
    char bar;

    std::cin >> first >> bar >> medium >> bar >> end;
    std::cout << 0 << first << bar << end << bar << medium;

    return 0;
}