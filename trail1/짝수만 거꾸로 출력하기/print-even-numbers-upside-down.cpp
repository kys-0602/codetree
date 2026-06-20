#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;
    std::vector<int> arr(N, 0);
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    for (int i = arr.size() - 1; i >= 0; --i) {
        if (!(arr[i] & 1)) std::cout << arr[i] << ' ';
    }
    
    return 0;
}