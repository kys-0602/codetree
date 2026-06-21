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

    for (int y = 0; y < 4; ++y) {
        int sum = 0;
        for (int x = 0; x < 4; ++x) {
            sum += arr[y][x];
        }

        std::cout << sum << '\n';
    }

    return 0;
}