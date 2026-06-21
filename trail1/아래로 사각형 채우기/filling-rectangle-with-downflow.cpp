#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    int arr[10][10]{ 0 };

    int start_num = 1;
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < N; ++y) {
            arr[y][x] = start_num++;
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