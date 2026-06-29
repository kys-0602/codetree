#include <iostream>

// 상, 우, 하, 좌
int DX[] = { 0, 1, 0, -1 };
int DY[] = { 1, 0, -1, 0 };

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x = 0, y = 0;
    int cur_dir = 0;
    std::string cmds; std::cin >> cmds;
    for (const auto& cmd : cmds) {
        if (cmd == 'L') {
            cur_dir = (cur_dir - 1 + 4) % 4;
        } 
        else if (cmd == 'R') {
            cur_dir = (cur_dir + 1) % 4;
        }
        else if (cmd == 'F') {
            x += DX[cur_dir];
            y += DY[cur_dir];
        }
    }

    std::cout << x << ' ' << y;

    return 0;
}