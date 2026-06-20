#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10]{ 0 };
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }

    int sum = arr[2] + arr[4] + arr[9];
    std::cout << sum;
    
    return 0;
}