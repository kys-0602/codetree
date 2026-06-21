#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[10]{ 0 };
    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) std::cin >> arr[i];

    int min = 100 + 1;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (std::abs(arr[i] - arr[j]) < min) {
                min = std::abs(arr[i] - arr[j]);
            }
        }
    }

    std::cout << min;

    return 0;
}