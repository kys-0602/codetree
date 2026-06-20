#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int score[10]{ 0 };

    int x;
    while (std::cin >> x) {
        if (x == 0) break;
        else if (x >= 10) {
            score[x / 10 - 1] += 1;
        }
    }

    for (int i = 10 - 1; i >= 0; --i) {
        std::cout << ((i + 1) * 10) << " - " << score[i] << '\n';
    }
    
    return 0;
}