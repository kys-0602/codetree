#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;
    int arr[100][100]{ 0 };

    int start_num = 1;
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            arr[y][x] = start_num++;
        }
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            std::cout << arr[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}