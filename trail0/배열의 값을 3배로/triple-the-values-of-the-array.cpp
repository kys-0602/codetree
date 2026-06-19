#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int arr[3][3]{ 0 };
    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
            std::cin >> arr[y][x];
            arr[y][x] *= 3;
        }
    }

    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
            std::cout << arr[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}