#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        int a, b; std::cin >> a >> b;

        int even_sum = 0;
        for (; a <= b; ++a) {
            even_sum += (!(a & 1) ? a : 0);
        }
        std::cout << even_sum << '\n';
    }
    
    return 0;
}