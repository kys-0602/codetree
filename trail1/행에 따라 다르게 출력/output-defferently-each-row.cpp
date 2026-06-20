#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int num = 0;
    for (int i = 0; i < N; ++i) {
        if (i & 1) {
            for (int j = 0; j < N; ++j) {
                num += 2;
                std::cout << num << ' ';
            }
        } else {
            for (int j = 0; j < N; ++j) {
                std::cout << ++num << ' ';
            }
        }
        std::cout << '\n';
    }
    
    return 0;
}