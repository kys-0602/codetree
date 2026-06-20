#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10]{ 0 };
    std::cin >> arr[0] >> arr[1];

    for (int i = 2; i < 10; ++i) {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << ' ';
    }
    
    return 0;
}