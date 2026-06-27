#include <iostream>

int gARR[200'000 + 2];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int offset = 100'000;
    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        int x; char d;
        std::cin >> x >> d;

        if (d == 'L') {
            for (int i = 0; i < x; ++i) {
                gARR[offset] = 1;
                if (i != (x - 1)) offset -= 1;
            }
        } else {
            for (int i = 0; i < x; ++i) {
                gARR[offset] = 2;
                if (i != (x - 1)) offset += 1;
            }
        }
    }

    int white = 0, black = 0;
    for (int i = 0; i < 200'000 + 2; ++i) {
        if (gARR[i] == 1) white += 1;
        else if (gARR[i] == 2) black += 1;
    }

    std::cout << white << ' ' << black;

    return 0;
}