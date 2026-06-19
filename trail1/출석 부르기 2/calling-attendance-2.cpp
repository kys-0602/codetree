#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int input;
    while (std::cin >> input) {
        if (input == 1) std::cout << "John\n";
        else if (input == 2) std::cout << "Tom\n";
        else if (input == 3) std::cout << "Paul\n";
        else if (input == 4) std::cout << "Sam\n";
        else {
            std::cout << "Vacancy";
            break;
        }
    }
    
    return 0;
}