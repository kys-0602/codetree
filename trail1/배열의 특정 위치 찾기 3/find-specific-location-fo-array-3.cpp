#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[100]{ 0 };
    int last_idx = 3;
    for (int i = 0, x = 0; i < 100; ++i) {
        std::cin >> x;
        if (x == 0) {
            last_idx = i;
            break;
        }

        arr[i] = x;
    }

    int sum = 0;
    for (int i = last_idx; i >= (last_idx - 3); --i) {
        sum += arr[i];
    }
    std::cout << sum;
    
    return 0;
}