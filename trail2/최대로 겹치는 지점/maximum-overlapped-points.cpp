#include <iostream>

int gARR[100 + 2]{ 0 };

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        int x1, x2; std::cin >> x1 >> x2;

        for (int i = x1 - 1; i < x2; ++i) {
            gARR[i] += 1;
        }
    }

    int max = gARR[0];
    for (int i = 1; i < (100 + 2); ++i) {
        if (gARR[i] > max) max = gARR[i];
    }

    std::cout << max;

    return 0;
}