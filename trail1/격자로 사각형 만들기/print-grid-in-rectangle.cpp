#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int arr[10][10]{ 0 };
    for (int i = 0; i < 10; ++i) {
        arr[i][0] = 1;
        arr[0][i] = 1;
    }

    for (int y = 1; y < 10; ++y) {
        for (int x = 1; x < 10; ++x) {
            arr[y][x] = arr[y - 1][x - 1] + arr[y - 1][x] + arr[y][x - 1];
        }
    }

    int N; std::cin >> N;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << arr[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}