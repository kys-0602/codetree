#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr1[10][10]{ 0 };
    int arr2[10][10]{ 0 };

    int N, M; std::cin >> N >> M;
    for (int n = 0; n < N; ++n) for (int m = 0; m < M; ++m) std::cin >> arr1[n][m];
    for (int n = 0; n < N; ++n) for (int m = 0; m < M; ++m) std::cin >> arr2[n][m];

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            std::cout << (!(arr1[n][m] == arr2[n][m])) << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}