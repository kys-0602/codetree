#include <iostream>

constexpr auto MAX_SIZE = 10000;

char gArr[MAX_SIZE];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K; std::cin >> N >> K;
    for (int n = 0; n < N; ++n) {
        int pos; char ch;
        std::cin >> pos >> ch;

        gArr[pos - 1] = ch;
    }

    int answer = -1;
    for (int i = 0; i <= MAX_SIZE - K - 1; ++i) {
        int score = 0;
        for (int j = 0; j <= K; ++j) {
            if (gArr[i + j] == 'G') score += 1;
            else if (gArr[i + j] == 'H') score += 2;
        }

        if (score > answer) answer = score;
    }

    std::cout << answer;

    return 0;
}