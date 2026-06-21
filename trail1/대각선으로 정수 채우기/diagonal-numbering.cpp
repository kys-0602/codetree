#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[100][100]{ 0 };
    int N, M; std::cin >> N >> M;
    
    int num = 1;
    // 대각선의 수만큼?
    for (int d = 0; d < (N + M) - 1; ++d) {
        int x = 0;
        int y = d;

        while (y >= 0) {
            if (x < N && y < M) arr[x][y] = num++;

            x++;
            y--;
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