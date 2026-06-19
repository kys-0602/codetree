#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B; std::cin >> A >> B;

    int sum = 0;
    int cnt = 0;
    for (; A <= B; ++A) {
        if (A % 5 == 0 || A % 7 == 0) {
            sum += A;
            cnt += 1;
        }
    }

    float avg = sum / (float)cnt;
    std::cout.precision(1);
    std::cout << sum << ' ' << std::fixed << avg;
    
    return 0;
}