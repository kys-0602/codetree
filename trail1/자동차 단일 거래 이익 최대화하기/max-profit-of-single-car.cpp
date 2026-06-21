#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    int arr[1000]{ 0 };
    for (int i = 0; i < N; ++i) std::cin >> arr[i];

    int max = 0;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int diff = arr[j] - arr[i];
            if (diff > max) max = diff;
        }
    }

    std::cout << max;

    return 0;
}