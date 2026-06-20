#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10]{ 0 };
    for (int i = 0; i < 10; ++i) std::cin >> arr[i];

    int last_idx = 9;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] % 3 == 0) {
            last_idx = i;
            break;
        }
    }

    std::cout << arr[last_idx - 1];
    
    return 0;
}