#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M; std::cin >> N >> M;

    int arr1[10][10]{ 0 };
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            std::cin >> arr1[y][x];
        }
    }

    int arr2[10][10]{ 0 };
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            std::cin >> arr2[y][x];
        }
    }

    int arr3[10][10]{ 0 };
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            if (arr1[y][x] == arr2[y][x]) arr3[y][x] = 0;
            else arr3[y][x] = 1;
        }
    }

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            std::cout << arr3[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}