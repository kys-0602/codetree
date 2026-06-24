#include <algorithm>
#include <functional>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[100];
    int n; std::cin >> n;
    for (int i = 0; i < n; ++i) std::cin >> arr[i];
    
    std::sort(arr, arr + n);
    for (int i = 0; i < n; ++i) std::cout << arr[i] << ' ';
    std::cout << '\n';
    
    std::sort(arr, arr + n, std::greater<int>());
    for (int i = 0; i < n; ++i) std::cout << arr[i] << ' ';

    return 0;
}