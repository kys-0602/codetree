#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    std::vector<int> arr(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> arr[i];

    std::vector<int> even_arr;
    for (int i = 0; i < N; ++i) {
        if (!(arr[i] & 1)) even_arr.push_back(arr[i]);
    }

    for (const auto& num : even_arr) std::cout << num << ' ';
    
    return 0;
}