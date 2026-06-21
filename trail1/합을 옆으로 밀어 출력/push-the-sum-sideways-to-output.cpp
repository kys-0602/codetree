#include <algorithm>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N; std::cin >> N;
    
    int sum = 0;
    for (int n = 0, x = 0; n < N; ++n) {
        std::cin >> x;
        sum += x;
    }

    std::string num_str = std::to_string(sum);
    std::rotate(num_str.begin(), num_str.begin() + 1, num_str.end());
    std::cout << num_str;

    return 0;
}