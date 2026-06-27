#include <iostream>

int gARR[200 + 2];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int start_pos = 100;
    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        int x; char d;
        std::cin >> x >> d;

        if (d == 'L') {
            for (int i = 0; i < x; ++i) {
                gARR[--start_pos] += 1;
            }
        } else {
            for (int i = 0; i < x; ++i) {
                gARR[start_pos++] += 1;
            }
        }
    }
    
    int answer = 0;
    for (int i = 0; i < 200 + 2; ++i) {
        if (gARR[i] >= 2) answer += 1;
    }

    std::cout << answer;

    return 0;
}