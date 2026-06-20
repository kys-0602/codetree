#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10]{ 0 };
    for (int i = 0; i < 10; ++i) std::cin >> arr[i];

    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < 10; ++i) {
        if ((i + 1) & 1) odd_sum += arr[i];
        else even_sum += arr[i];
    }

    std::cout << (even_sum >= odd_sum ? (even_sum - odd_sum) : (odd_sum - even_sum));
    
    return 0;
}