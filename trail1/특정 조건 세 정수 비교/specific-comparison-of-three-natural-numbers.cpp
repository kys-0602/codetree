#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int a, b, c; std::cin >> a >> b >> c;

    int min = c;
    if ((a <= b && b <= c) || (a <= c && c <= b)) min = a;
    else if ((b <= a && a <= c) || (b <= c && c <= a)) min = b;
    else if ((c <= a && a <= b) || (c <= b && b <= a)) min = c;

    std::cout << (a == min) << ' ' << (a == b && b == c);

    return 0;
}