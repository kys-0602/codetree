#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, M; std::cin >> N >> M;

    int cnt = 0;
    for (int i = 0, x = 0; i < N; ++i) {
        std::cin >> x;
        if (x == M) cnt += 1; 
    }   

    std::cout << cnt;
    
    return 0;
}