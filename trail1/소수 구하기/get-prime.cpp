#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N;

    for (int i = 2; i <= N; ++i) {
        bool flag = true;
        int num = 0;
        for (int j = 2; j*j <= i; ++j) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }

        if (flag) std::cout << i << ' ';
    }
    
    return 0;
}