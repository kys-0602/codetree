#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];

    std::sort(vec.rbegin(), vec.rend());
    std::cout << vec[0] << ' ' << vec[1];

    return 0;
}