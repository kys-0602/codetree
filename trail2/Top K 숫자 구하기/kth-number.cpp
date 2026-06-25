#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K; std::cin >> N >> K;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];

    std::sort(vec.begin(), vec.end());
    std::cout << vec[K - 1];

    return 0;
}