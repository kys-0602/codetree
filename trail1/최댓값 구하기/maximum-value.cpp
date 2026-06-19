#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b, c; std::cin >> a >> b >> c;

    int max = c;
    if ((a >= b && b >= c) || (a >= c && c >= b)) max = a;
    else if ((b >= a && a >= c) || (b >= c && c >= a)) max = b;
    else max = c;

    std::cout << max; 

    return 0;
}