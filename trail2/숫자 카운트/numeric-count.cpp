#include <iostream>
#include <vector>

struct Hint {
    int num;
    int oneCnt;
    int twoCnt;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<Hint> hints(N); for (int i = 0; i < N; ++i) std::cin >> hints[i].num >> hints[i].oneCnt >> hints[i].twoCnt;

    int answer = 0;
    for (int a = 1; a <= 9; ++a) {
        for (int b = 1; b <= 9; ++b) {
            for (int c = 1; c <= 9; ++c) {
                if (a == b || a == c || b == c) continue;

                int num = (a * 100) + (b * 10) + (c);

                bool flag = true;
                for (const auto& hint : hints) {
                    int n1 = (hint.num / 100) % 10;
                    int n2 = (hint.num / 10) % 10;
                    int n3 = (hint.num % 10);
                    
                    // oneCnt
                    int oneCnt = 0;
                    if (a == n1) oneCnt += 1;
                    if (b == n2) oneCnt += 1;
                    if (c == n3) oneCnt += 1;

                    // twoCnt
                    int twoCnt = 0;
                    if (a == n2 || a == n3) twoCnt += 1;
                    if (b == n1 || b == n3) twoCnt += 1;
                    if (c == n1 || c == n2) twoCnt += 1;

                    if (oneCnt != hint.oneCnt || twoCnt != hint.twoCnt) {
                        flag = false;
                        break;
                    }
                }

                if (flag == true) answer += 1;
            }
        }
    }

    std::cout << answer;

    return 0;
}