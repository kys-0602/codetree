#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int five_cnt = 0;
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 4; ++x) {
            int input; std::cin >> input;
            if (input % 5 == 0) five_cnt += 1;
        }
    }
    std::cout << five_cnt;

    return 0;
}