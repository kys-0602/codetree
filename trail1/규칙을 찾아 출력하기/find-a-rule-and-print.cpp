#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;

    if (N <= 2) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) std::cout << '*' << ' ';
            std::cout << '\n';
        }
    } else {
        // int start_space = N - 1;

        for (int i = 0; i < N; ++i) {
            if (i == 0 || i == N - 1) for (int j = 0; j < N; ++j) std::cout << '*' << ' ';
            else {
                for (int j = 0; j < N; ++j) {
                    if (j == 0 || j == N - 1) std::cout << '*' << ' ';
                    else if (j < i) std::cout << '*' << ' ';
                    else {
                        std::cout << ' ' << ' ';
                    }
                }
            }

            std::cout << '\n';
        }
    }
    
    return 0;
}