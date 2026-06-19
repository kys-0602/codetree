#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    
    int x = 1;
    int cnt = 1;
    while ((N / x) > 1) {
        N /= x;
        x += 1;
        cnt += 1;
    }
    std::cout << cnt;
    
    return 0;
}