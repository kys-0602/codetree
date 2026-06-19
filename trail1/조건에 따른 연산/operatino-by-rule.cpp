#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int cnt = 0;
    while (N < 1000) {
        if (!(N & 1)) {
            N *= 3;
            N += 1;
        } else {
            N <<= 1;
            N += 2;
        }
        cnt += 1;
    }   
    std::cout << cnt;
    
    return 0;
}