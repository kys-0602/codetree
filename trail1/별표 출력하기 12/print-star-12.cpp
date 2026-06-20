#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i & 1) {
                if (j & 1) {
                    if (j >= i) std::cout << '*' << ' ';
                    else std::cout << ' ' << ' ';
                } else {
                    std::cout << ' ' << ' ';
                }
            } else {
                if (i == 0) std::cout << '*' << ' ';
                else {
                    if (j > i) {
                        if (j & 1) std::cout << '*' << ' ';
                        else std::cout << ' ' << ' ';
                    } else std::cout << ' ' << ' ';
                }
            }
        }
        std::cout << '\n';
    }
    
    return 0;
}