#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N << 1, 0);
    for (int i = 0; i < (N << 1); ++i) std::cin >> vec[i];

    std::sort(vec.begin(), vec.end());
    
    int max = -1;
    for (int i = 0; i < N; ++i) {
        int n = (vec[i] + vec[(N << 1) - 1 - i]);
        if (n > max) {
            max = n;
        }
    }

    std::cout << max;

    return 0;
}