#include <iostream>
#include <vector>

int maxx(const std::vector<int>& vec, int idx) {
    if (idx == vec.size() - 1) return vec[idx];

    int max = maxx(vec, idx + 1);
    if (vec[idx] > max) return vec[idx];
    else return max;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<int> vec(n, 0);
    for (int i = 0; i < n; ++i) std::cin >> vec[i];
    std::cout << maxx(vec, 0);

    return 0;
}