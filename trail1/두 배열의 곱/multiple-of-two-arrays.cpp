#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr1[3][3]{ 0 }; for (int y = 0; y < 3; ++y) for (int x = 0; x < 3; ++x) std::cin >> arr1[y][x];
    int arr2[3][3]{ 0 }; for (int y = 0; y < 3; ++y) for (int x = 0; x < 3; ++x) std::cin >> arr2[y][x];

    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
            std::cout << arr1[y][x] * arr2[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}