#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int arr[5][5]{ 0 };
    for (int x = 0; x < 5; ++x) arr[0][x] = 1;
    for (int y = 0; y < 5; ++y) arr[y][0] = 1;

    for (int y = 1; y < 5; ++y) {
        for (int x = 1; x < 5; ++x) {
            arr[y][x] = arr[y - 1][x] + arr[y][x - 1];
        }
    }

    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 5; ++x) {
            std::cout << arr[y][x] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}