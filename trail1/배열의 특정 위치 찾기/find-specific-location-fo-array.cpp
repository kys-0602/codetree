#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[10]{ 0 };
    
    int even_sum = 0, three_sum = 0, three_cnt = 0;
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];

        if ((i & 1)) even_sum += arr[i];
        if ((i + 1) % 3 == 0) {
            three_sum += arr[i];
            three_cnt += 1;
        }
    }

    std::cout.precision(1);
    std::cout << even_sum << ' ' << std::fixed << (three_sum / (float)three_cnt);
    
    return 0;
}