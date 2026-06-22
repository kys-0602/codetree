#include <iostream>
#include <vector>

int sum(const std::vector<int>& vec, int a, int b) {
    int s = 0;
    for (int i = a - 1; i <= (b - 1); ++i) {
        s += vec[i];
    }
    return s;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];
    for (int m = 0; m < M; ++m) {
        int a, b; std::cin >> a >> b;

        std::cout << sum(vec, a, b) << '\n';
    }   

    return 0;
}