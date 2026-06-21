#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[2][4]{ 0 };
    for (int y = 0; y < 2; ++y) {
        for (int x = 0; x < 4; ++x) {
            std::cin >> arr[y][x];
        }
    }

    std::cout.precision(1);
    std::cout << std::fixed;

    // 가로 평균
    for (int y = 0; y < 2; ++y) {
        float sum = 0.0f;
        for (int x = 0; x < 4; ++x) {
            sum += arr[y][x];
        }

        std::cout << (sum / 4) << ' ';
    }
    std::cout << '\n';

    // 세로 평균
    for (int x = 0; x < 4; ++x) {
        float sum = 0.0f;
        for (int y = 0; y < 2; ++y) {
            sum += arr[y][x];
        }

        std::cout << (sum / 2) << ' ';
    }
    std::cout << '\n';

    // 전체 평균
    float sum = 0.0f;
    for (int y = 0; y < 2; ++y) {
        for (int x = 0; x < 4; ++x) {
            sum += arr[y][x];
        }
    }

    std::cout << (sum / (2 * 4));

    return 0;
}