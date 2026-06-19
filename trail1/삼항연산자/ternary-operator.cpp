#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int score; std::cin >> score;

    std::cout << (score == 100 ? "pass" : "failure");

    return 0;
}