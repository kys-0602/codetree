#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[5]; for (int i = 0; i < 5; ++i) std::cin >> arr[i];

    int answer = 1'000'000'000;
    // TEAM: (i, j)
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            // TEAM: (k, l)
            for (int k = 0; k < 5; ++k) {
                if (k == i || k == j) continue;

                for (int l = k + 1; l < 5; ++l) {
                    if (l == i || l == j) continue;

                    int last = -1;
                    for (int m = 0; m < 5; ++m) {
                        if (m != i && m != j && m != k && m != l) {
                            last = m;
                            break;
                        }
                    }

                    int t1 = arr[i] + arr[j];
                    int t2 = arr[k] + arr[l];
                    int t3 = arr[last];

                    if (t1 != t2 && t1 != t3 && t2 != t3) {
                        int diff = std::max(t1, std::max(t2, t3)) - std::min(t1, std::min(t2, t3));
                        if (diff < answer) answer = diff;
                    }
                }
            }
        }
    }

    std::cout << (answer == 1'000'000'000 ? -1 : answer);

    return 0;
}