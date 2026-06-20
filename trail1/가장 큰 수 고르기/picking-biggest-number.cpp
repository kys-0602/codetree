#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10]{ 0 };
    for (int i = 0; i < 10; ++i) std::cin >> arr[i];

    int max = arr[0];
    for (int i = 1; i < 10; ++i) {
        if (arr[i] > max) max = arr[i];
    }

    std::cout << max;
    
    return 0;
}