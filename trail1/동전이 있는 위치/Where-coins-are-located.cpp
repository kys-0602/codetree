#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[9][9]{ 0 };
    int N, M; std::cin >> N >> M;

    for (int m = 0; m < M; ++m) {
        int r, c; std::cin >> r >> c;
        arr[r - 1][c - 1] = 1;
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x) {
            std::cout << arr[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}