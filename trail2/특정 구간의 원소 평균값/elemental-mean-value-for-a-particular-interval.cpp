#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0); for (int i = 0; i < N; ++i) std::cin >> vec[i];

    int answer = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            int sum = 0;
            for (int k = i; k <= j; ++k) {
                sum += vec[k];
            }

            int len = j - i + 1;
            if (sum % len != 0) continue;

            int avg = sum / len;
            for (int k = i; k <= j; ++k) {
                if (vec[k] == avg) {
                    answer += 1;
                    break;
                }
            }
        }
    }

    std::cout << answer;

    return 0;
}