#include <iostream>

void printRectOne(int h, int w) {
    int start_num = 1;
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            std::cout << start_num++ << ' ';
            if (start_num == 10) start_num = 1;
        }
        std::cout << '\n';
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N; std::cin >> N;
    printRectOne(N, N);

    return 0;
}