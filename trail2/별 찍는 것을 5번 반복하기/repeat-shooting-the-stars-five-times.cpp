#include <iostream>

void print10Star() {
    for (int i = 0; i < 10; ++i) {
        std::cout << '*';
    }
    std::cout << '\n';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    for (int i = 0; i < 5; ++i) print10Star();

    return 0;
}