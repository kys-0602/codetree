#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int start_num = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << start_num << ' ';
        }
        start_num += 1;
        std::cout << '\n';
    }
    
    return 0;
}