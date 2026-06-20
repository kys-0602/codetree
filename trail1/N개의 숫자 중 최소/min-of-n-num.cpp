#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[100 + 1]{ 0 };
    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) std::cin >> arr[n];

    int min = arr[0];
    for (int i = 1; i < N; ++i) if (arr[i] < min) min = arr[i];

    int min_cnt = 0;
    for (int i = 0; i < N; ++i) if (arr[i] == min) min_cnt += 1;

    std::cout << min << ' ' << min_cnt;
    
    return 0;
}