#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int arr[10][10]{ 0 };
    int N; std::cin >> N;

    int num = 1, cnt = 0;
    for (int x = N - 1; x >= 0; --x) {
        if (!((N - x - 1) & 1)) {
            for (int y = N - 1; y >= 0; --y) arr[y][x] = num++;
        } else {
            for (int y = 0; y < N; ++y) arr[y][x] = num++;
        }
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << arr[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}