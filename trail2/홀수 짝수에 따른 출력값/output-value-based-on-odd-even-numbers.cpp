#include <iostream>

int getSum(int N) {
    if (N % 2 == 0) {
        if (N == 0) return 0;

        return getSum(N - 2) + N;
    } else {
        if (N == 1) return 1;

        return getSum(N - 2) + N;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::cout << getSum(N);

    return 0;
}