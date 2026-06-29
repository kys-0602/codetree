#include <iostream>

int DX[] = { 0, 0, -1, 1 };
int DY[] = { 1, -1, 0, 0 };

int getDirIndex(char dir) {
    if (dir == 'N') return 0;
    else if (dir == 'S') return 1;
    else if (dir == 'W') return 2;
    return 3;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x = 0, y = 0;
    int N; std::cin >> N;
    for (int n = 0; n < N; ++n) {
        char dir; int dist;
        std::cin >> dir;
        std::getchar();
        std::cin >> dist;

        int idx = getDirIndex(dir);
        for (int i = 0; i < dist; ++i) {
            x += DX[idx]; y += DY[idx];
        }
    }

    std::cout << x << ' ' << y;

    return 0;
}