#include <iostream>
#include <vector>

int sum(const std::vector<int>& vec, int N, int M) {
    int s = 0;
    while (M >= 1) {
        s += vec[M - 1];

        if (M & 1) M -= 1;
        else M >>= 1;
    }
    return s;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M; std::cin >> N >> M;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];
    std::cout << sum(vec, N, M);

    return 0;
}