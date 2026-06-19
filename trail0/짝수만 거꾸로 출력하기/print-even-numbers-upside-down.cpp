#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int ARR[100 + 1]{ 0 };
    int N; std::cin >> N;

    for (int i = 0; i < N; ++i) {
        std::cin >> ARR[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        if (!(ARR[i] & 1))
            std::cout << ARR[i] << ' ';
    }

    return 0;
}