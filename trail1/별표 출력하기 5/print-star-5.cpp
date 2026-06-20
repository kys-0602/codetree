#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int l = 0; l < N; ++l) {
        for (int ll = 0; ll < N - l; ++ll) {
            for (int i = 0; i < N - l; ++i) std::cout << '*';
            std::cout << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}