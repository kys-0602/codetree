#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }

    int sum = 0;
    int last_idx = 0;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] >= 250) break;

        sum += arr[i];
        last_idx = i;
    }

    std::cout.precision(1);
    std::cout << sum << ' ' << std::fixed << (sum / (float)(last_idx + 1));
    
    
    return 0;
}