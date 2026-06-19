#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    char ch; std::cin >> ch;

    if (ch == 'S') std::cout << "Superior";
    else if (ch == 'A') std::cout << "Excellent";
    else if (ch == 'B') std::cout << "Good";
    else if (ch == 'C') std::cout << "Usually";
    else if (ch == 'D') std::cout << "Effort";
    else std::cout << "Failure";

    return 0;
}