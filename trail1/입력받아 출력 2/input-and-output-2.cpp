#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int first, end;
    char bar;
    std::cin >> first >> bar >> end;
    std::cout << first << end;

    return 0;
}