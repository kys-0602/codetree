#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int arr[10][10]{ 0 };
    for (int x = 0; x < N; ++x) {
        if (x % 2 == 0) {
            for (int y = 0; y < N; ++y) {
                arr[y][x] = y + 1;
            }
        } else {
            for (int y = N - 1; y >= 0; --y) {
                arr[y][x] = N - y;
            }
        }
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << arr[y][x];
        }
        std::cout << '\n';
    }

    return 0;
}