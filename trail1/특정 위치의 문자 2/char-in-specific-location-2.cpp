#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    char strs[10]{ '\0' };
    for (int i = 0; i < 10; ++i) {
        std::cin >> strs[i];
        std::getchar();
    }

    std::cout << strs[1] << ' ' << strs[4] << ' ' << strs[7];
    
    return 0;
}