#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int arr[9]{ 0 };
    int N; std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int x; std::cin >> x;
        arr[x - 1] += 1;
    }

    for (const auto& num : arr) {
        std::cout << num << '\n';
    }
    
    return 0;
}