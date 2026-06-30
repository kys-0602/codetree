#include <iostream>

int DX[] = { 0, 0, -1, 1 };
int DY[] = { 1, -1, 0, 0 };

int getDir(char dir) {
    if (dir == 'N') return 0;
    else if (dir == 'S') return 1;
    else if (dir == 'W') return 2;
    return 3;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;

    int x = 0, y = 0;
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        char dir; int dist;
        std::cin >> dir; std::getchar();
        std::cin >> dist;

        int idx = getDir(dir);
        for (int d = 0; d < dist; ++d) {
            x += DX[idx];
            y += DY[idx];

            answer += 1;
            if (x == 0 && y == 0) {
                std::cout << answer;
                return 0;
            }
        }
    }
    std::cout << -1;

    return 0;
}