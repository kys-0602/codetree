#include <iostream>
#include <vector>

void abss(std::vector<int>& vec) {
    for (auto& num : vec) {
        num = std::abs(num);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];
    abss(vec);

    for (const auto& num : vec) {
        std::cout << num << ' ';
    }

    return 0;
}