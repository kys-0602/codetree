#include <iostream>

bool isPrime(int N) {
    for (int i = 2; i < N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int primeSum(int A, int B) {
    int sum = 0;
    for (; A <= B; ++A) {
        if (isPrime(A)) {
            sum += A;
        }
    }
    return sum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int A, B; std::cin >> A >> B;
    std::cout << primeSum(A, B);

    return 0;
}