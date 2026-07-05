#include <iostream>

bool carry(int a, int b, int c) {
    while (a > 0 || b > 0 || c > 0) {
        int sum = (a % 10) + (b % 10) + (c % 10);

        if (sum >= 10) return true;

        a /= 10;
        b /= 10;
        c /= 10;
    }

    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    int* iArr = new int[N];
    for (int n = 0; n < N; ++n) {
        std::cin >> iArr[n];
    }

    int answer = -1;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j <N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if (carry(iArr[i], iArr[j], iArr[k]) == false) {
                    int sum = iArr[i] + iArr[j] + iArr[k];
                    if (sum > answer) answer = sum;
                }
            }
        }
    }

    delete[] iArr;
    iArr = nullptr;

    std::cout << answer;

    return 0;
}