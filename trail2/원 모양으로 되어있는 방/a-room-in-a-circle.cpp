#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i) std::cin >> vec[i];

    int answer = 1'000'000'000;
    for (int room = 1; room <= N; ++room) {
        int total_dist = 0;
        for (int i = room; i < (N + room); ++i) {
            int idx = i % N;
            int people = vec[idx];
            int dist = std::abs(i - room) * people;

            total_dist += dist;
        }
        
        if (total_dist < answer) answer = total_dist;
    }

    std::cout << answer;

    return 0;
}