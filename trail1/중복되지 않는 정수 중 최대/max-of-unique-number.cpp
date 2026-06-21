#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    
    std::vector<int> freq_vec(1000 + 1, 0);
    for (int i = 0, x = 0; i < N; ++i) {
        std::cin >> x;
        freq_vec[x] += 1;
    }

    int max = -1;
    for (int i = 1; i <= 1000; ++i) {
        if (freq_vec[i] == 1 && i > max) {
            max = i;
        }
    }

    std::cout << max;

    return 0;
}