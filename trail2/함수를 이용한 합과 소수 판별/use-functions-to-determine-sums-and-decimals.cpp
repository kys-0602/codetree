#include <iostream>

bool isPrimeNumber(int N) {
    for (int i = 2; i < N; ++i) if (N % i == 0) return false;
    return true;
}

bool isEvenSum(int N) {
    int sum = 0;
    while (N > 0) {
        sum += (N % 10);
        N /= 10;
    }
    return (sum % 2 == 0);
}

int f(int A, int B) {
    int cnt = 0;
    for (; A <= B; ++A) {
        if (isPrimeNumber(A) && isEvenSum(A)) {
            cnt += 1;
        }
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int A, B; std::cin >> A >> B;
    std::cout << f(A, B);

    return 0;
}