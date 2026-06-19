#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, a; std::cin >> N >> a;

    int start = 1;
    while (start <= N) {
        std::cout << (start % a == 0) << '\n';
        start += 1;
    }
    
    return 0;
}