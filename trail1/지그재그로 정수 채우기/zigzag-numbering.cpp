#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[100][100]{ 0 };
    int N, M; std::cin >> N >> M;

    int start_num = 0;
    for (int m = 0; m < M; ++m) {
        if (m & 1) {
            for (int n = N - 1; n >= 0; --n) arr[n][m] = start_num++;
        } else {
            for (int n = 0; n < N; ++n) arr[n][m] = start_num++;
        }
    }

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            std::cout << arr[n][m] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}