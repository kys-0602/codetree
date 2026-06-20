#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int M; std::cin >> M;
    for (int m = 0; m < M; ++m) {
        int N; std::cin >> N;

        int cnt = 0;
        while (N != 1) {
            if (N & 1) { N *= 3; N += 1; }
            else N >>= 1;
            cnt += 1;
        }
        std::cout << cnt << '\n';
    }
    
    return 0;
}