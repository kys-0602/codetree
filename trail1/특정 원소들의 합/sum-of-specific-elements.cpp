#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[4][4]{ 0 };
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 4; ++x) {
            std::cin >> arr[y][x];
        }
    }

    int sum = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            sum += arr[i][j];
        }
    }

    std::cout << sum;

    return 0;
}