#include <iostream>

struct Tile {
    int black;
    int white;
    char color;
};

Tile gARR[200'000 + 2];

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
                gARR[offset].color = 'W';
                gARR[offset].white += 1;

                if (i != (x - 1)) offset -= 1;
            }
        } else {
            for (int i = 0; i < x; ++i) {
                gARR[offset].color = 'B';
                gARR[offset].black += 1;

                if (i != (x - 1)) offset += 1;
            }
        }
    }

    int white = 0, black = 0, gray = 0;
    for (int i = 0; i < 200'000 + 2; ++i) {
        if (gARR[i].white >= 2 && gARR[i].black >= 2) gray += 1;
        else if (gARR[i].color == 'W') white += 1;
        else if (gARR[i].color == 'B') black += 1;
    }

    std::cout << white << ' ' << black << ' ' << gray;

    return 0;
}