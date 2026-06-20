#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[100 + 1]{ 0 };
    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
        arr[i] *= arr[i];
        std::cout << arr[i] << ' ';
    }
    
    return 0;
}