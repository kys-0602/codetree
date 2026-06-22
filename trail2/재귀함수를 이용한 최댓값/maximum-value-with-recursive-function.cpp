#include <iostream>
#include <vector>

int maxx(const std::vector<int>& vec, int idx, int max) {
    if (idx == vec.size() - 1) return max;

    if (vec[idx] > max) {
        max = vec[idx];
    }

    return maxx(vec, idx + 1, max);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<int> vec(n, 0);
    for (int i = 0; i < n; ++i) std::cin >> vec[i];
    std::cout << maxx(vec, 0, vec[0]);

    return 0;
}