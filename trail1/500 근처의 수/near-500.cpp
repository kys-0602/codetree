#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[10]{ 0 };
    for (int i = 0; i < 10; ++i) std::cin >> arr[i];

    int max = 0;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] < 500 && arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << max << ' ';

    int min = 1001;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] > 500 && arr[i] < min) {
            min = arr[i];
        }
    }

    std::cout << min;

    return 0;
}