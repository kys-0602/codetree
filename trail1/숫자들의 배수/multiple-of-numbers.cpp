#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    int target = (N * 5) << 1;
    std::vector<int> arr(target / N, 0);
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = N * (i + 1);
    }

    int five_cnt = 0;
    for (const auto& num : arr) {
        std::cout << num << ' ';

        if (num % 5 == 0) five_cnt += 1;
        if (five_cnt == 2) break;
    }
    
    return 0;
}