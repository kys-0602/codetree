#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int a, b; std::cin >> a >> b;

        int prod = 1;
        for (; a <= b; ++a) prod *= a;

        std::cout << prod << '\n';
    }
    
    return 0;
}