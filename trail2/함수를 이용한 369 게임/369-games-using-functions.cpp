#include <iostream>

int get3Count(int A, int B) {
    int cnt = 0;
    for (; A <= B; ++A) {
        int C = A;
        if (C % 3 == 0) cnt += 1;
        else {
            while (C > 0) {
                int m = C % 10;
                if (m == 3 || m == 6 || m == 9) {
                    cnt += 1;
                    break;
                }
                C /= 10;
            }
        }
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int A, B; std::cin >> A >> B;
    std::cout << get3Count(A, B);

    return 0;
}