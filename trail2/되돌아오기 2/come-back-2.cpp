#include <iostream>

// 상, 우, 하, 좌
int DX[] = { 0, 1, 0, -1 };
int DY[] = { 1, 0, -1, 0 };

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x = 0, y = 0;
    int dir = 0;
    int time = 0;
    std::string strs; std::cin >> strs;
    for (const auto& ch : strs) {
        if (ch == 'F') {
            x += DX[dir];
            y += DY[dir];
        }
        else if (ch == 'L') {
            dir = (dir - 1 + 4) % 4;
        }
        else if (ch == 'R') {
            dir = (dir + 1) % 4;
        }

        time += 1;
        if (x == 0 && y == 0) {
            std::cout << time;
            return 0;
        }
    }
    std::cout << -1;

    return 0;
}