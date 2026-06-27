#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K; std::cin >> N >> K;

    std::vector<int> vec(N, 0);
    for (int k = 0; k < K; ++k) {
        int A, B; std::cin >> A >> B;

        for (int i = A - 1; i < B; ++i) {
            vec[i] += 1;
        }
    }

    int max = vec[0];
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] > max) max = vec[i];
    }

    std::cout << max;

    return 0;
}