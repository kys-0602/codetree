#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<std::pair<int, int>> vec(N);
    for (int i = 0; i < N; ++i) {
        vec[i].first = i + 1;
        std::cin >> vec[i].second;
    }

    std::sort(vec.begin(), vec.end(), [&](const auto& v1, const auto& v2) {
        if (v1.second == v2.second) return v1.first < v2.first;
        return v1.second < v2.second;
    });
    
    std::vector<int> vec2(N, 0);
    for (int i = 0; i < N; ++i) {
        vec2[vec[i].first - 1] = i + 1;
    }

    for (const auto& v : vec2) {
        std::cout << v << ' ';
    }

    return 0;
}