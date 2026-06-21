#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str; std::getline(std::cin, str);
    
    for (int i = 2; i < 10; ++i) {
        std::cout << str[i];
    }

    return 0;
}