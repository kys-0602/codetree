#include <iostream>
#include <vector>

struct Time {
    int start;
    int end;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<Time> times(N);
    for (int i = 0; i < N; ++i) std::cin >> times[i].start >> times[i].end;

    int answer = -1;
    for (int i = 0; i < N; ++i) {
        int timeline[1000 + 1] = { 0 };
        
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;

            for (int t = times[j].start; t < times[j].end; ++t) {
                timeline[t] = 1;
            }
        }

        int total_time = 0;
        for (int t = 0; t <= 1000; ++t) {
            total_time += timeline[t];
        }

        if (total_time > answer) answer = total_time;
    }

    std::cout << answer;

    return 0;
}