#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int arr[15][15];
    for (int y = 0; y < 15; ++y) arr[y][0] = 1;
    for (int y = 1; y < 15; ++y) arr[y][y] = 1;
    for (int y = 2; y < 15; ++y) {
        for (int x = 1; x < y; ++x) {
            arr[y][x] = arr[y - 1][x - 1] + arr[y - 1][x];
        }
    }

    int N; std::cin >> N;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < y + 1; ++x) {
            std::cout << arr[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}