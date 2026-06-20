#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    char strs[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };
    char ch; std::cin >> ch;

    for (int i = 0; i < 6; ++i) {
        if (strs[i] == ch) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << "None";
    
    return 0;
}