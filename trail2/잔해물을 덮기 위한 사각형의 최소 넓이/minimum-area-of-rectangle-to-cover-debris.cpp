#include <iostream>

int gARR[2002][2002];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int i = 0; i < 2; ++i) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        x1 += 1000, y1 += 1000, x2 += 1000, y2 += 1000;

        for (int y = y1; y < y2; ++y) {
            for (int x = x1; x < x2; ++x) {
                if (i == 0) gARR[y][x] = 1;
                else {
                    if (gARR[y][x] == 1) gARR[y][x] = 0;
                }
            }
        }
    }
    
    int minX = 2002, minY = 2002;
    int maxX = -2002, maxY = -2002;

    for (int y = 0; y < 2002; ++y) {
        for (int x = 0; x < 2002; ++x) {
            if (gARR[y][x] == 1) {
                if (x < minX) minX = x;
                if (y < minY) minY = y;
                if (x > maxX) maxX = x;
                if (y > maxY) maxY = y;
            }
        }
    }

    if (maxX == -2002) std::cout << 0;
    else std::cout << (maxX - minX + 1) * (maxY - minY + 1);

    return 0;
}