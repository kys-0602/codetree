#include <iostream>

constexpr auto MAX_SIZE = 100 + 1;

int gArr[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    int a, b, c; std::cin >> a >> b >> c;

    int answer = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            for (int k = 1; k <= N; ++k) {
                int abs1 = std::abs(i - a);
                int abs2 = std::abs(j - b);
                int abs3 = std::abs(k - c);

                if (abs1 <= 2 || abs2 <= 2 || abs3 <= 2) {
                    answer += 1;
                }
            }
        }
    }

    std::cout << answer;

    return 0;
}