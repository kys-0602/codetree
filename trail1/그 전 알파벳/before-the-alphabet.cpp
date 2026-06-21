#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char ch; std::cin >> ch;
    ch -= 1;
    if (ch < 'a') ch = 'z';
    std::cout << ch;

    return 0;
}