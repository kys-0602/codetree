#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    int sum = 0;
    for (int i = 1; i < N; ++i) {
        if (N % i == 0) sum += i;
    }

    std::cout << (sum == N ? "P" : "N"); 
    
    return 0;
}