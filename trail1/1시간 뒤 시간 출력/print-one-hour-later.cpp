#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char colon;
    int h, m; std::cin >> h >> colon >> m;
    h += 1;
    std::cout << h << colon << m;

    return 0;
}