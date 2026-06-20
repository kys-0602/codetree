#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10]{ 0 };

    int last_idx = 10;
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
        if (arr[i] == 0) {
            last_idx = i;
            break;
        }
    }

    for (int i = last_idx - 1; i >= 0; --i) {
        std::cout << arr[i] << ' ';
    }
    
    return 0;
}