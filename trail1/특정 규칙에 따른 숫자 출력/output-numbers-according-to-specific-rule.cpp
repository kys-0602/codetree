#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int start_num = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) std::cout << ' ' << ' ';
        for (int j = 0; j < (N - i); ++j) {
            std::cout << start_num++ << ' ';
            if (start_num == 10) start_num = 1;
        }
        std::cout << '\n';
    }
    
    return 0;
}