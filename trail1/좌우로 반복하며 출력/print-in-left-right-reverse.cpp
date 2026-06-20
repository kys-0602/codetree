#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int start_num;
    for (int i = 0; i < N; ++i) {
        if (i & 1) {
            start_num = N;
            for (int j = N; j > 0; --j) {
                std::cout << start_num--;
            }
        } else {
            start_num = 1;
            for (int j = 0; j < N; ++j) {
                std::cout << start_num++;
            }
        }
        std::cout << '\n';
    }
    
    return 0;
}